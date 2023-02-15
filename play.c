#include <stdio.h>
/**
* Main - Entry point
* Description: Scripts to master pointers
*
* Return: 0 (success)
*/

int main(void)
{
	int var1 = 1;
	int var2 = 2;
	int *v1 = &var1;
	int *v2 = &var2;
	printf("Address of var1 and var2 variables are: %x and\n %x\n", *v1, *v2);
	printf("Other %ls\n", v1);
	return 0;
}

