#include "ft_printf.h"

void	category_scanner(t_print *box)
{
	box->scan_type = "cspdiuxX%";
	while (box->scan_type[box->size] != box->str[box->pos])
		box->size++;
	if (box->scan_type[box->size] == 'p')
		box->sum += (write (1, "0x", 2));
}

void	parse_formatting(t_print *box)
{
	void	(*category_is[8])(t_print *);

	category_is[0] = &category_is_char;
	category_is[1] = &category_is_string;
	category_is[2] = &category_is_hexa_ptr;
	category_is[3] = &category_is_deci;
	category_is[4] = &category_is_unsign;
	category_is[5] = &category_is_hexa;
	category_is[6] = &category_is_hexa_up;
	category_is[7] = &category_is_modulo;
	box->size = 0;
	while (box->str[box->pos])
	{
		if (box->str[box->pos] == '%')
		{
			box->pos++;
			category_scanner(box);
			category_is[box->size](box);
			box->size = 0;
		}
		else
			box->sum += ft_putchar(box->str[box->pos]);
		box->pos++;
	}
}

int	ft_printf(const char *str, ...)
{
	t_print	box;

	va_start(box.list, str);
	box.str = str;
	box.pos = 0;
	box.sum = 0;
	parse_formatting(&box);
	va_end(box.list);
	return (box.sum);
}
