
NAME = fillit

C_FILES += main.c forme_check.c placer.c random.c var_reinit.c ft_putstr.c

O_FILES = $(C_FILES:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(C_FILES)
	gcc -o $(NAME) $(O_FILES)

clean:
	/bin/rm -f $(O_FILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
