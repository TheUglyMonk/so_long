/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/12 17:45:23 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <string.h>

char	*ft_strdup(const char *src)
{
	char	*pt;
	int		i;

	pt = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!pt)
		return (NULL);
	i = 0;
	while (src[i])
	{
		pt[i] = src[i];
		i++;
	}
	pt[i] = 0;
	return (pt);
}

/*void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

	alarm(5);
	if (argc == 1)
		return (0);
	if (atoi(argv[1]) == 1)
	{
		if (!(str_dup = ft_strdup(str)))
			ft_print_result("NULL");
		else
			ft_print_result(str_dup);
		if (str_dup == str)
			ft_print_result("\nstr_dup's adress == str's adress");
	}
	return (0);
}*/