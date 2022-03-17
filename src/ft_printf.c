/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:54:14 by tfockede          #+#    #+#             */
/*   Updated: 2022/02/17 14:54:14 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Writes the C string pointed by format to the standard output (stdout). 
	If format includes format specifiers (subsequences beginning with %), 
	the additional arguments following format are formatted and inserted in 
	the resulting string replacing their respective specifiers. cspdiuxX%
*/

#include "ft_printf.h"

static int	ft_specifier(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_spec_char(va_arg(args, int));
	else if (c == 's')
		count = ft_spec_string(va_arg(args, char *));
	else if (c == 'p')
		count = ft_spec_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count = ft_spec_decimal(va_arg(args, int));
	else if (c == 'u')
		count = ft_spec_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		count = ft_spec_hexalower(va_arg(args, unsigned int));
	else if (c == 'X')
		count = ft_spec_hexaupper(va_arg(args, unsigned int));
	else if (c == '%')
	{
		ft_putchar_fd(c, 1);
		count++;
	}
	return (count);
}

static int	ft_read_format(const char *format, va_list args)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] != '%')
		{
			count++;
			ft_putchar_fd(format[i], 1);
		}
		else
		{
			i++;
			count += ft_specifier(format[i], args);
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = ft_read_format(format, args);
	va_end(args);
	return (count);
}
