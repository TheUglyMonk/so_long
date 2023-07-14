/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achien-k <achien-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:31:52 by achien-k          #+#    #+#             */
/*   Updated: 2023/06/22 11:02:25 by achien-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *dest, size_t size)
{
	char	*temp;
	int		dest_len;
	size_t	i;

	temp = malloc(sizeof(*temp) * size);
	if (temp == NULL)
		return (NULL);
	dest_len = ft_strlen(dest);
	i = 0;
	while ((int)i < dest_len)
	{
		temp[i] = dest[i];
		i++;
	}
	while (i < size)
		temp[i++] = '\0';
	if (dest)
		free(dest);
	return (temp);
}
