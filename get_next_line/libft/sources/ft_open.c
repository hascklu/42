#include "../includes/libft.h"

int		ft_open(char *str)
{
	int		fd;

	fd = open(str, O_RDONLY);
	return (fd);
}
