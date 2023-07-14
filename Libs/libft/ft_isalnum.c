/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:04:24 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/12 17:30:54 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <ctype.h>

int	ft_isalnum(int str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	else if (str >= 'a' && str <= 'z')
	{
		return (1);
	}
	else if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int		main()
{
	printf("%d", ft_isalnum(-65));
}*/