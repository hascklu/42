#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
# define BUFF_SIZE 21

void	input_basic_error_check(int check, int id);
char	**square_maker(int square_size);
int		count_tab(char **str);
int		erase_piece(char **square, int i);
void	ft_putstrstr(char **str, int i);
int		tab_counter(int **coord);
void	var_reinit(int *i, int *a, int *g, int id);
void	var_reinit2(int *coord, int *tab_x, int *tab_y);
int		pos_crawler(int *tab_x, int *tab_y, char **square);
void	var_reinit_lol(int *coord, char **square, int *tab_x, int *tab_y);
void	checkplace(int **coord, int tab_y, int tab_x, char **square);
int		*gather_coord(char *str, int g);
int		*map_cases(char *str);
void	free_double_array(char **str);
void	free_double_array_int(int **tab);
void	forme_check2(char *str);
void	forme_check(char *str, int id);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
#endif
