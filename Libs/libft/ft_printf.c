/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:07:44 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/24 17:07:48 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include "libft.h"

int	ft_flag(va_list arg, const char frmt)
{
	int	ret;

	ret = 0;
	if (arg == NULL)
		write(1, "null", 6);
	else if (frmt == 'i' || frmt == 'd')
		ret = ft_printf_nbr(va_arg(arg, int));
	else if (frmt == 'c')
		ret = ft_putchar(va_arg(arg, int));
	else if (frmt == 's')
		ret = ft_printf_str(va_arg(arg, char *));
	else if (frmt == '%')
		ret = ft_putchar('%');
	else if (frmt == 'p')
		ret = ft_printf_p(va_arg(arg, unsigned long));
	else if (frmt == 'x')
		ret = ft_printf_hex(va_arg(arg, unsigned int));
	else if (frmt == 'X')
		ret = ft_printf_hexi(va_arg(arg, unsigned int));
	else if (frmt == 'u')
		ret = ft_printf_uns(va_arg(arg, unsigned int));
	return (ret);
}

int	res_printf(const char *frmt, va_list arg)
{
	int	i;

	i = 0;
	while (*frmt != 0)
	{
		if (*frmt == '%')
		{
			i = i + ft_flag(arg, *(++frmt));
		}
		else
			i = i + ft_putchar(*frmt);
		++frmt;
	}
	return (i);
}

int	ft_printf(const char *frmt, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, frmt);
	if (!frmt)
		return (0);
	i = res_printf(frmt, arg);
	va_end(arg);
	return (i);
}

/* int	main(void)
{
	int i = 8;

	ft_printf("int %d\n", -54321);
	ft_printf("int %i\n", -2147483648);
	ft_printf("char %c\n", '0' - 256);
	ft_printf("string %s\n", "abcdef");
	ft_printf("perc %%\n");
	ft_printf("point %p\n", i);
	ft_printf("long %x\n", 5);
	ft_printf("long %X\n", 5);
	ft_printf("uint %u\n", 5);
} */