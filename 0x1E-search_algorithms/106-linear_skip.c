#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARCHIVES 10  /* Maximum number of archives to keep (adjust as needed) */

/**
 * @brief Deletes out-of-date archives based on the provided number to keep.
 *
 * @param number The number of archives to keep, including the most recent.
 *                Defaults to 0 (keep only the most recent).
 *
 * @return void
 */
void do_clean(int number) {
    char local_versions_dir[100] = "versions";  /* Local versions directory */
    char remote_versions_dir[100] = "/path/to/versions"; /* Remote versions directory */
    char remote_releases_dir[100] = "/data/web_static/releases"; /* Remote releases directory */
    char *local_archives[MAX_ARCHIVES];
    char *remote_versions_archives[MAX_ARCHIVES];
    char *remote_releases_archives[MAX_ARCHIVES];
    int local_to_delete, remote_versions_to_delete, remote_releases_to_delete;
    FILE *fp;

    /* Update keep_archives value if provided */
    if (number > 0) {
        MAX_ARCHIVES = number;
    }

    /* Get a list of all archive files in versions folder locally */
    if ((fp = fopen(local_versions_dir, "r")) == NULL) {
        perror("fopen");
        exit(1);
    }
    int i = 0;
    while (fscanf(fp, "%s", local_archives[i]) != EOF && i < MAX_ARCHIVES) {
        i++;
    }
    fclose(fp);

    /* Get a list of all archive files in versions folder on remote servers */
    for (int server_index = 0; server_index < 2; server_index++) {
        char cmd[200];
        snprintf(cmd, sizeof(cmd), "ssh user@server%d ls -tr %s/*.tar.gz", server_index + 1, remote_versions_dir);
        if ((fp = popen(cmd, "r")) == NULL) {
            perror("popen");
            exit(1);
        }
        i = 0;
        while (fscanf(fp, "%s", remote_versions_archives[i]) != EOF && i < MAX_ARCHIVES) {
            i++;
        }
        pclose(fp);
    }

    /* Get a list of all archive files in releases folder on remote servers */
    for (int server_index = 0; server_index < 2; server_index++) {
        char cmd[200];
        snprintf(cmd, sizeof(cmd), "ssh user@server%d ls -tr %s/*.tar.gz", server_index + 1, remote_releases_dir);
        if ((fp = popen(cmd, "r")) == NULL) {
            perror("popen");
            exit(1);
        }
        i = 0;
        while (fscanf(fp, "%s", remote_releases_archives[i]) != EOF && i < MAX_ARCHIVES) {
            i++;
        }
        pclose(fp);
    }

    /* Calculate the number of archives to delete locally */
    local_to_delete = i - MAX_ARCHIVES;
    if (local_to_delete > 0) {
        for (i = 0; i < local_to_delete; i++) {
            char rm_cmd[200];
            snprintf(rm_cmd, sizeof(rm_cmd), "rm -f %s/%s", local_versions_dir, local_archives[i]);
            system(rm_cmd);
        }
        printf("Deleted %d out-of-date archives locally.\n", local_to_delete);
    }

    /* Calculate the number of archives to delete on remote versions folder */
    for (int server_index = 0; server_index < 2; server_index++) {
        remote_versions_to_delete = i - MAX_ARCHIVES;
        if (remote_versions_to_delete > 0) {
            char rm_cmd[200];
            snprintf(rm_cmd, sizeof(rm_cmd), "ssh user@server%d rm

