/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:20:50 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/26 14:20:53 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "libft.h"

int	ft_printf_uns(long num)
{
	int	ret;

	ret = 0;
	if (num < 0)
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
