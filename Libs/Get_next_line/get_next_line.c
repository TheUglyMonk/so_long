/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:37:09 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/07/06 10:37:15 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_gnl(int fd, char *buff)
{
	char	*buff_aux;
	int		size;

	size = 1;
	buff_aux = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff_aux)
		return (NULL);
	*buff_aux = 0;
	while (ft_strchr(buff_aux, '\n') == NULL && size != 0)
	{
		size = read(fd, buff_aux, BUFFER_SIZE);
		if (size == -1)
		{
			free(buff_aux);
			free(buff);
			return (NULL);
		}
		buff_aux[size] = '\0';
		buff = ft_strjoin(buff, buff_aux);
	}
	free(buff_aux);
	return (buff);
}

int	find_ln(char *buff)
{
	int		i;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	return (i);
}

char	*find_put_ln(char *buff)
{
	char	*ln;
	int		count;
	int		i;

	count = 0;
	i = find_ln(buff);
	if (!buff[count])
		return (NULL);
	ln = malloc(sizeof(char) * (i + 2));
	if (!ln)
		return (NULL);
	while (buff[count] != '\n' && buff[count])
	{
		ln[count] = buff[count];
		count ++;
	}
	if (buff[count] == '\n')
	{
		ln[count] = '\n';
		count++;
	}
	ln[count] = '\0';
	return (ln);
}

char	*take_ln(char *buff)
{
	char	*aux;
	int		i;
	int		j;

	j = 0;
	i = find_ln(buff);
	if (!buff[i])
	{
		free(buff);
		return (NULL);
	}
	aux = malloc(sizeof(char) * (ft_strlen(buff) - i + 1));
	if (!aux)
		return (NULL);
	*aux = 0;
	i = i + 1;
	while (buff[i] != '\0')
	{
		aux[j] = buff[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	free (buff);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*ln;

	if (fd > 4095 || fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	buff = read_gnl(fd, buff);
	if (!buff)
		return (NULL);
	ln = find_put_ln(buff);
	buff = take_ln(buff);
	return (ln);
}

/*int main(void)
{
    char *g_line;
    int i;
    int fd1;
    fd1 = open("tests/text", O_RDONLY);
    i = 1;
    while (i < 11)
    {
        g_line = get_next_line(fd1);
        printf("g_line [%02d]: <%s>\n", i, g_line);
        free(g_line);
        i++;
    }
    return 0;
}*/