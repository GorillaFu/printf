#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int var;
	char str[] = "School";
	char sChar = 'T';
	var = _printf("Holberton");
	_printf("%d\n", var);
	var = printf("Holberton");
	printf("%d\n", var);

	var = _printf("%s\n", str);
	_printf("%d\n", var);
	var = printf("%s\n", str);
	printf("%d\n", var);
	
	var = _printf("%c\n", sChar);
	_printf("%d\n", var);
	var = printf("%c\n", sChar);
	printf("%d\n", var);
	
	var =_printf("%%\n");
	_printf("%d\n", var);
	var = printf("%%\n");
	printf("%d\n", var); 

	var = _printf("ABCD%\n");
	_printf("%d\n", var); 
	var = printf("ABCD%\n");
	printf("%d\n", var);
	printf("\n");
	return (0);
}
