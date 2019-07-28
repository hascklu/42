#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];
	int		*coord[27];
	int		i;

	i = 0;
	input_basic_error_check(argc, 0);
	fd = open(argv[1], O_RDONLY);
	input_basic_error_check(fd, 1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		input_basic_error_check(fd, 2);
		buf[ret] = '\0';
		forme_check(buf, 0);
		coord[i] = gather_coord(buf, i);
		input_basic_error_check(i, 6);
		i++;
	}
	coord[i] = NULL;
	forme_check(buf, 1);
	checkplace(coord, 0, 0, square_maker(0));
	free_double_array_int(coord);
	input_basic_error_check(close(fd), 3);
	return (0);
}
