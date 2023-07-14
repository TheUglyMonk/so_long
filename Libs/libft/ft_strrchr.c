/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/12 17:50:46 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	k;
	int		i;
	int		pos;

	k = (char)c;
	i = 0;
	pos = -1;
	while (str[i] != '\0')
	{
		if (str[i] == k)
			pos = i;
		i++;
	}
	if (str[i] == k)
			pos = i;
	if (pos != -1)
		return ((char *)(str + pos));
	else
		return (NULL);
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
	char		*str;
	char		str2[] = "bonjour";
	int			arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(str = ft_strrchr(str2, 'b')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 2)
	{
		if (!(str = ft_strrchr(str2, 'o')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 4)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 3)
	{
		char	str3[]= "bonjourno";
		if (!(str = ft_strrchr(str3, 'o')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str3 + 8)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 4)
	{
		if (!(str = ft_strrchr(str2, 'j')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 3)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 5)
	{
		if (!(str = ft_strrchr(str2, 's')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	else if (arg == 6)
	{
		if (!(str = ft_strrchr(str2, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 7)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 7)
	{
		char	str3[] = "";
		if (!(str = ft_strrchr(str3, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str3)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 8)
	{
		if (!(str = ft_strrchr(str2 + 2, 'b')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}
	return (0);
}*/