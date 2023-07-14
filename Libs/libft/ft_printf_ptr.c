/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:30:12 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/26 14:30:13 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdint.h>
#include "libft.h"

int	ft_printf_p(unsigned long num)
{
	int	ret;

	if (!num)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	ret = 2;
	ret += ft_printf_hex(num);
	return (ret);
}
