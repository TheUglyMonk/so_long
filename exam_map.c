#include "so_long.h"

// rectangular?
int check_rect(char *map)
{
    int     fd;
    char    *line;
    int     x;
    int     x_a;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    line = get_next_line(fd);
    x = ft_strlen(line);
    while (line != NULL)
    {
        free(line);
        line = get_next_line(fd);
        x_a = ft_strlen(line);
        if (x != x_a)
            return (0);
    }
    free (line);
    close(fd);
    return (1);
}
// tem todos os elementos?

// tem paredes?
int check_walls(char *map)
{
    int     fd;
    char    *line;
    int     y;

    fd = open(map, O_RDONLY);
    if (fd <= 0)
    {
        ft_printf("Erro!\nMapa nao foi encontrado/aberto.");
        return (0);
    }
    y = cont_y(char *map)
    

}
// tem solucao?
// ficheiro e' .ber?
int verificar_ber(char *map)
{
    char aux[4];

    aux = mapa + ft_strlen(mapa) - 4;
    if (ft_strncomp(mapa, ".ber", 4) != 0)
    {
        ft_printf("ERRO!\n Ficheiro tem formato errado.")
        return(0);
    }
    else
      return (1);
}

// x ou y < 3 ?
int less_then_three(char *map)
{
    if (cont_x(char *map) < 3)
    {
        ft_printf("ERRO!\nX < 3")
        return (0);
    }
    else if (cont_y(char *map) < 3)
    {        
        ft_printf("ERRO!\nY < 3")
        return (0);
    }
    else
        return (1);
}

int exam_map_flags(char *map)
{
    if (verificar_ber(map) == 0)
        return (0);
    else if (less_then_three(char *map) == 0)
        return (0);
    else if (check_rect(char *map) == 0)
    {
        ft_printf("ERRO!\nNot a rectangle");
        return (0);
    }
    //else if (flag1 == 0)
        //ft_printf("ERRO! Flag.")
        //return (0);
    // ....
    //else
    //  return (1);

}