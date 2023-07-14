/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:56:32 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/13 18:14:35 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

void	ft_rev_tab(char *tab, int size)
{
	char	aux1;
	int		aux;
	int		cont;

	aux = size - 1;
	cont = 0;
	while (cont < (size / 2))
	{
		aux1 = tab[cont];
		tab[cont] = tab[aux];
		tab[aux] = aux1;
		cont++;
		aux--;
	}
}

int	zero(int n, char *final)
{
	int		aux;

	aux = 0;
	if (n == 0)
	{
		final[0] = '0';
		aux = aux + 1;
	}
	return (aux);
}

int	sz_int(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	aux;
	long	num;
	char	*final;

	num = n;
	final = (char *)malloc((sz_int(num) + 1) * sizeof(char));
	if (!final)
		return (NULL);
	aux = zero(n, final);
	if (n < 0)
		num = -num;
	while (num)
	{
		final[aux] = (num % 10) + 48;
		num = num / 10;
		aux++;
	}
	if (n < 0)
	{
		final[aux] = '-';
		aux++;
	}
	final[aux] = '\0';
	ft_rev_tab(final, aux);
	return (final);
}

/*int	main(void)
{
    printf("%s\n", ft_itoa(2147483647));
    printf("---------\n");
    printf("%s\n", ft_itoa(-2147483648));
    printf("---------\n");
    printf("%s\n", ft_itoa(420));
    printf("---------\n");
    printf("%s\n", ft_itoa(-123456));
    printf("---------\n");
    printf("%s\n", ft_itoa(10));
    printf("---------\n");
    printf("%s\n", ft_itoa());
    printf("---------\n");
}*/