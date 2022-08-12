#include "main.h"

/**
 * get_flag - turns on flag if _printf finds a flag modifier in the 
 * format string
 * @s: character in the format string
 * @f: pointer to struct flags in which we switch the flag on
 * Return: 1 if a flag has been switched on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch(s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
