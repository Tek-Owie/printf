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

	va_start(arg, format);

	while (format[i] != '\0')
	{
	  if (format[i]) != '%')
	  {
	    _putchar(format[i]);
	    cont++;
	  }
	  else
	  {
	    if (format[i+1] == 'c')
	    {
	      _putchar(va_arg(arg, int));
	      cont++;
	      i++;
	    }
	    else if (format[i+1] == 's')
	    {
	      i++;
	      str = va_arg(arg, char *);
	      k = 0;
	      
	      while (str[k] != '\0')
	      {
		_putchar(str[k]);
		cont++;
		k++;
	      }
	    }
	    else if (format[i+1] == '%')
	    {
	      i++;
	      _putchar('%');
	      cont++;
	    }
	  }
	
	  i++;
	}

	va_end(arg);
	return (cont);
}
