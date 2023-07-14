/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/12 17:34:16 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	ch;
	int				i;

	i = 0;
	st = (unsigned char *) str;
	ch = (unsigned char) c;
	while (i < (int)n)
	{
		if (st[i] == ch)
			return (st + i);
		i++;
	}
	return (NULL);
}

/*int		main(void)
{
	char *s;
	int	i = 0;
	s = (char *)malloc(55 * sizeof(char));
	s = ft_memchr("123456", '5', 6);
	while (s[i] != '\0')
	{
		printf("%c", s[i]);
		i++;
	}
}*/