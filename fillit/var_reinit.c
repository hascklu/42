#include "fillit.h"

void	var_reinit(int *i, int *a, int *g, int id)
{
	if (id == 0)
	{
		*i = 0;
		*a = 0;
		*g = *g + 1;
	}
	else if (id == 1)
	{
		*i = 0;
		*a = *g + 1;
	}
}

void	var_reinit2(int *coord, int *tab_x, int *tab_y)
{
	*tab_y = coord[9];
	*tab_x = coord[8] + 1;
}

void	var_reinit_lol(int *coord, char **square, int *tab_x, int *tab_y)
{
	if (coord[8] + 1 < count_tab(square))
		var_reinit2(coord, tab_x, tab_y);
	else
		var_reinit(tab_x, tab_y, &coord[9], 1);
}

void	free_double_array(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_double_array_int(int **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
