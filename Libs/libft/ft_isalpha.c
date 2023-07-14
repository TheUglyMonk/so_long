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
#include<stdlib.h>
#include "libft.h"

int	ft_isalpha(int str)
{
	if (str >= 'A' && str <= 'Z')
	{
		return (1);
	}
	else if (str <= 'z' && str >= 'a')
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