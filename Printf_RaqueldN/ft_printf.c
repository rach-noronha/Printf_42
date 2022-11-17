/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-noro <rde-noro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:32:57 by rde-noro          #+#    #+#             */
/*   Updated: 2022/10/28 00:34:04 by rde-noro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_specified(va_list *args, char specifier)
{
	int	sub_print_len;

	sub_print_len = 0;
	if (specifier == 'i' || specifier == 'd')
		sub_print_len = ft_putnbr(va_arg(*args, int));
	else if (specifier == 'c')
		sub_print_len = ft_putchar(va_arg(*args, int));
	else if (specifier == 's')
		sub_print_len = ft_putstr(va_arg(*args, char *));
	else if (specifier == 'u')
		sub_print_len = ft_putunbr(va_arg(*args, unsigned int));
	else if (specifier == 'p')
		sub_print_len = ft_putptr(va_arg(*args, unsigned long));
	else if (specifier == 'x')
		sub_print_len = ft_puthexa(va_arg(*args, unsigned int), 0);
	else if (specifier == 'X')
		sub_print_len = ft_puthexa(va_arg(*args, unsigned int), 1);
	else if (specifier == '%')
		sub_print_len = ft_putchar('%');
	return (sub_print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		print_len;

	print_len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			print_len += print_specified(&args, *++format);
		else if (*format)
			print_len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (print_len);
}
