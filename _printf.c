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
	int i = 0, k = 0;
	char *str = NULL;
	int (*func)(va_list);

	va_start(arg, format);

	while (format[i] != '\0')
	{
	  if (format[i]) != '%')
	  {
	    func = _select_func(format[i+1]);
	    if (func != NULL)
	    {
	      cont += func(arg);
	      i++;
	    }
	  }
	  else
	  {
	    _putchar(format[i]);
	    cont++;
	  }
	
	  i++;
	}

	va_end(arg);
	return (cont);
}
