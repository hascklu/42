#include "fillit.h"

int		*map_cases(char *str)
{
	int	i;
	int	a;
	int	*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 16)))
		exit(0);
	i = 0;
	a = -1;
	while (str[i])
	{
		if (str[i] == '#')
		{
			tab[++a] = i;
			tab[++a] = i - 1;
			tab[++a] = i + 1;
			tab[++a] = i + 5;
		}
		i++;
	}
	return (tab);
}

void	forme_check2(char *str)
{
	int	i;
	int	a;
	int	*tab;
	int	connection;

	connection = 0;
	tab = map_cases(str);
	i = 1;
	a = 4;
	while (i % 4 != 0 && i < 16)
	{
		while (a < 13)
		{
			if (tab[i] == tab[a] && connection++ < 3)
				tab[i - i % 4] = -5;
			a = a + 4;
		}
		a = 4;
		i++;
		if (i % 4 == 0 && i < 16)
			i++;
	}
	free(tab);
	input_basic_error_check(connection, 4);
}

void	forme_check(char *str, int id)
{
	int i;
	int bloc;
	int ligne_size;
	int ligne;

	i = 0;
	bloc = 0;
	ligne_size = 0;
	ligne = 0;
	while ((str[i] == '.' || str[i] == '#') && bloc < 5 &&
								ligne < 5 && ligne_size++ < 4)
	{
		if (str[i] == '#')
			bloc++;
		i++;
		if (str[i] == '\n' && ligne_size == 4 && ligne++ < 5 && i++ < 22)
			ligne_size = 0;
	}
	if (bloc != 4 || ligne != 5 - (21 - i) || ligne_size != 0
	|| (id == 1 && i == 20 && str[20] != '\0'))
	{
		ft_putstr("error\n");
		exit(0);
	}
	forme_check2(str);
}
