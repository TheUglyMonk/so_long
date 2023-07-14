/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/11 14:04:27 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include "libft.h"

int	aux_atoi(const char *str, int i)
{
	int	c;
	int	sign;

	sign = 1;
	c = 0;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
		c++;
		if (c > 1)
			return (0);
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		i;

	i = 0;
	num = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r'))
			i++;
	sign = aux_atoi(str, i);
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return ((int)num * sign);
}
