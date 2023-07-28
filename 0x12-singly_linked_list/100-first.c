#include <stdio.h>
void __attribute__((constructor)) hare(void);
/**
 * hare - prints a string before the main fuction is executed.
 */
void hare(void)
{
printf("You are beat! and yet, you must allow,\n"
"I bore my house upon my back!\n*);
}
