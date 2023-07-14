/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:44:54 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/18 13:45:11 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;
	t_list	*aux1;

	if (*lst)
	{
		aux = *lst;
		while (aux->next != NULL)
		{
			aux1 = aux->next;
			del(aux->content);
			free(aux);
			aux = aux1;
		}
		del(aux->content);
		free(aux);
		*lst = NULL;
	}
}

/*#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_print_result(t_list *elem)
{
	write(1, elem->content, strlen(elem->content));
}

static int	nb_free_done;

void	ft_del(void *content)
{
	free(content);
	nb_free_done++;
}

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
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
	nb_free_done = 0;
	if (atoi(argv[1]) == 1)
	{
		ft_lstclear(&elem3, &ft_del);
		if (elem)
			ft_print_result(elem);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem2)
			ft_print_result(elem2);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem3)
			ft_print_result(elem3);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem4)
		{
			write(1, "nb_free_done = ", 15);
			nb_free_done += '0';
			write(1, &nb_free_done, 1);
		}
		else
			write(1, "NULL", 4);
	}
	return (0);
}*/