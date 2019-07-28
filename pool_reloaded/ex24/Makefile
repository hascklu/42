
NAME = libft.a

SRC = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o

INC = includes/*.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(INC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)
		/bin/rm -f */*~
		/bin/rm -f */#*#
		/bin/rm -f */a.out

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
