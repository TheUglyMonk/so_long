#include "so_long.h"


//contar o x e y

int cont_x(char *map)
{
    int     fd;
    char    *line;
    int     x;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    line = get_next_line(fd);
    x = ft_strlen(line);
    free (line);
    close(fd);
    return (x);
}

int cont_y(char *map)
{
    char    *line;
    int     fd;
    int     y;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    line = get_next_line(fd);
    y = 1;
    while (line != NULL)
    {
        free(line);
        line = get_next_line(fd);
        y++;
    }
    close(fd);
    return (y);
}

// verificar a se a linha e' composta so' por "1"

int check_tb_wall(char *map)
{
    char    *line;
    int     fd;
    int     i;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    line = get_next_line(fd);
    i = 0;
    while (line[i] != '\0')
    {
        if (line[i] != '1')
        {
            ft_printf("Erro!\nFalta parede");
            return (0);
        }
        i++;
    }
    free(line);
    return (1);
}

int check_mid_walls(char *map)
{
    char    *line;
    int     fd;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    line = get_next_line(fd);
    if (line[0] != '1' || line[ft_strlen(line) - 1] != '1')
    {
        ft_printf("Erro!\nFalta parede");
        return (0);
    }    
    free(line);
    return (1);
}