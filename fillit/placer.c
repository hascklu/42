#include "fillit.h"

int		place_piece(int *coord, int tab_y, int tab_x, char **square)
{
	int	pos_x;

	pos_x = 0;
	while (tab_x + coord[pos_x] < count_tab(square)
		&& tab_y + coord[pos_x + 1] < count_tab(square)
		&& tab_y + coord[pos_x + 1] >= 0
		&& tab_x + coord[pos_x] >= 0
		&& square[tab_y + coord[pos_x + 1]][tab_x + coord[pos_x]] == '.')
	{
		if (pos_x == 6)
		{
			pos_x = 0;
			coord[8] = tab_x;
			coord[9] = tab_y;
			while (pos_x < 7)
			{
				square[tab_y + coord[pos_x + 1]]
				[tab_x + coord[pos_x]] = coord[10];
				pos_x = pos_x + 2;
			}
			return (0);
		}
		pos_x = pos_x + 2;
	}
	return (1);
}

int		erase_piece(char **square, int i)
{
	int a;
	int	g;

	g = 0;
	a = 0;
	while (square[a])
	{
		while (square[a][g])
		{
			if (square[a][g] == 'A' + i)
				square[a][g] = '.';
			g++;
		}
		g = 0;
		a++;
	}
	return (1);
}

int		pos_crawler(int *tab_x, int *tab_y, char **square)
{
	if (*tab_x < count_tab(square) - 1)
	{
		*tab_x = *tab_x + 1;
		return (0);
	}
	else if (*tab_y < count_tab(square) - 1)
	{
		*tab_x = 0;
		*tab_y = *tab_y + 1;
		return (0);
	}
	return (1);
}

void	checkplace(int **coord, int tab_y, int tab_x, char **square)
{
	static int	i;

	while (i < tab_counter(coord))
	{
		if (place_piece(coord[i], tab_y, tab_x, square) == 1)
		{
			if (pos_crawler(&tab_x, &tab_y, square) == 0)
				;
			else if (i > 0 && erase_piece(square, --i))
				var_reinit_lol(coord[i], square, &tab_x, &tab_y);
			else
			{
				checkplace(coord, 0, 0, square_maker(count_tab(square) - 1));
				free_double_array(square);
			}
		}
		else
			var_reinit(&tab_x, &tab_y, &i, 0);
	}
	ft_putstrstr(square, i);
}

int		*gather_coord(char *str, int g)
{
	int				*coord;
	int				i;
	int				a;
	int				b;

	b = -1;
	a = 0;
	i = 0;
	while (str[i] != '#')
		i++;
	if (!(coord = (int*)malloc(sizeof(int) * 11)))
		exit(0);
	while (str[a])
	{
		if (str[a] == '#')
		{
			coord[++b] = (a % 5 < i % 5 ? (a % 5) - i % 5 : ((a - i) % 5));
			coord[++b] = (a / 5 - i / 5);
		}
		a++;
	}
	coord[++b] = 0;
	coord[++b] = 0;
	coord[++b] = 'A' + g;
	return (coord);
}
