#include "main.h"
/**
 *_printf - printf
 *@format: const char pointer
 *Description: this functions implement some functions of printf
 *Return: num of characteres printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int cont = 0;
	int i = 0;

	va_start(arg, format);

	while (format[i] != '\0')
	{
	  if (_putchar(format[i]) != -1)
	    cont += 1;
	  
	  i++;
	}

	va_end(arg);
	return (cont);
}
