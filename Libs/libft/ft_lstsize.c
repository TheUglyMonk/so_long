/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:22:26 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/14 14:29:12 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

int main(int argc, const char *argv[])
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		c;
	char		*str = strdup("lorem");
	char		*str2 = strdup("ipsum");
	char		*str3 = strdup("dolor");
	char		*str4 = strdup("sit");

	elem = ft_lstnewone(str);
	elem2 = ft_lstnewone(str2);
	elem3 = ft_lstnewone(str3);
	elem4 = ft_lstnewone(str4);
	alarm(5);
	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		elem->next = elem2;
		elem2->next = elem3;
		elem3->next = elem4;
		c = ft_lstsize(elem) + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
		elem->next = NULL;
		c = ft_lstsize(elem) + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
		elem = NULL;
		c = ft_lstsize(elem) + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
	}
	return (0);
}*/