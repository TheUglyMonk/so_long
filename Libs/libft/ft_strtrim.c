/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/13 13:48:04 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include "libft.h"

int	aux_find_set(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (int)ft_strlen(s1))
	{
		j = 0;
		while (j < (int)ft_strlen(set) && set[j] != s1[i])
		{
			j++;
		}
		if (set[j] == s1[i])
			i++;
		else
		{
			return (i);
		}
	}
	return (i);
}

int	aux_find_set_rev(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = (int)ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0)
	{
		j = 0;
		while (j < (int)ft_strlen(set) && set[j] != s1[i])
		{
			j++;
		}
		if (set[j] == s1[i])
			i--;
		else
		{
			return (i);
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	j = aux_find_set(s1, set);
	if (j == (int)ft_strlen(s1))
		return (ft_strdup(""));
	k = 0;
	str = (char *)malloc((aux_find_set_rev(s1, set) - j + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (j <= aux_find_set_rev(s1, set))
	{
		str[k] = s1[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}
