#include <stdio.h>

/**
 * myStartupFun - apply the constractor attrubute to myStartupFun()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implimentation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
