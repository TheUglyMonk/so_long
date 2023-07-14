/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:19 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/26 14:30:20 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "libft.h"

int	ft_printf_str(char *c)
{
	int		i;

	i = 0;
	if (!c)
		return (write(1, "(null)", 6));
	else
	{
		while (c[i] != '\0')
		{
			ft_putchar(c[i]);
			i++;
		}
	}
	return (i);
}
