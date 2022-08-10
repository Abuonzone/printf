#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int len1, len2, len3;
	int len11, len22, len33;
	int len21, len31;

	len1 = _printf("Character:[%c]\n", 'H');
	len11 = printf("Character:[%c]\n", 'H');
	len2 = _printf("String:[%s]\n", "I am a string !");
	len22 = printf("String:[%s]\n", "I am a string !");
	len3 = _printf("Percent:[%%]\n");
	len33 = _printf("Percent:[%%]\n");
	len21 = _printf("Lenght:[%d, %i]\n", len1, len1);
	len31 = _printf("Length:[%d]\n", -762534);
	printf("%d, %d, %d, %d\n", len1, len2, len3, len21);
	printf("%d, %d, %d, %d\n", len11, len22, len33, len31); 
	return (0);
}
