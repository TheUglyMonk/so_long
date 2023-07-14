/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:13:03 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/05/17 16:13:05 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "libft.h"

int	ft_printf_nbr(int num)
{
	int	ret;

	ret = 0;
	if (num == -2147483648)
	{
		ret += ft_putchar('-');
		ret += ft_putchar('2');
		num = 147483648;
	}
	else if (num < 0)
	{
		ret += ft_putchar('-');
		num = num * -1;
	}
	if (num >= 10)
	{
		ret += ft_printf_nbr(num / 10);
		ret += ft_printf_nbr(num % 10);
	}
	else
		ret += ft_putchar(num + 48);
	return (ret);
}
