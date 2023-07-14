/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:32:45 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/26 14:32:47 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "libft.h"

int	ft_printf_hex(unsigned long num)
{
	char		*hex;
	int			ret;

	ret = 0;
	hex = "0123456789abcdef";
	if (num < 0)
	{
		ret += ft_putchar('-');
		num = num * -1;
	}
	if (num >= 16)
	{
		ret += ft_printf_hex(num / 16);
		ret += ft_printf_hex(num % 16);
	}
	else
		ret += ft_putchar(hex[num]);
	return (ret);
}

int	ft_printf_hexi(unsigned long num)
{
	char		*hex;
	int			ret;

	ret = 0;
	hex = "0123456789ABCDEF";
	if (num < 0)
	{
		ret += ft_putchar('-');
		num = num * -1;
	}
	if (num >= 16)
	{
		ret += ft_printf_hexi(num / 16);
		ret += ft_printf_hexi(num % 16);
	}
	else
		ret += ft_putchar(hex[num]);
	return (ret);
}
