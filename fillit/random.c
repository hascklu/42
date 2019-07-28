#include "fillit.h"

void	input_basic_error_check(int check, int id)
{
	if (id == 6 && check == 26)
	{
		ft_putstr("error\n");
		exit(0);
	}
	if (id == 0 && check != 2)
	{
		ft_putstr("usage: fillit [file]\n");
		exit(0);
	}
	if (check == -1)
	{
		if (id == 1)
			ft_putstr("open() failed\n");
		if (id == 2)
			ft_putstr("read() failed\n");
		if (id == 3)
			ft_putstr("close() failed\n");
		exit(0);
	}
	if (id == 4 && check < 3)
	{
		ft_putstr("error\n");
		exit(0);
	}
}

char	**square_maker(int square_size)
{
	char		**square;
	int			i;
	int			a;
	static int	size;

	size = 2 + square_size;
	a = -1;
	i = 0;
	if (!(square = (char**)malloc(sizeof(char*) * size + 1)))
		exit(0);
	while (i < size)
	{
		if (!(square[i] = (char*)malloc(sizeof(char) * size + 1)))
			exit(0);
		while (a < size)
		{
			square[i][a] = '.';
			a++;
		}
		square[i][a] = '\0';
		i++;
		a = 0;
	}
	square[i] = 0;
	return (square);
}

int		count_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstrstr(char **str, int i)
{
	int	a;

	a = 0;
	i = 0;
	while (str[i])
	{
		while (str[i][a])
		{
			write(1, &str[i][a], 1);
			a++;
		}
		write(1, "\n", 1);
		a = 0;
		i++;
	}
	exit(0);
}

int		tab_counter(int **coord)
{
	int	a;
	int	b;
	int	i;

	i = 0;
	a = 0;
	b = 0;
	while (coord[a] != NULL)
		a++;
	return (a);
}
