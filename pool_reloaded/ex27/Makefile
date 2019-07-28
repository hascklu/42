
NAME = ft_display_file

SRC = ./*.c

OBJ = ./*.o

INC = includes/*.h

FLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(INC) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f */*~
	/bin/rm -f */#*#
	/bin/rm -f */a.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
