
NAME = libft.a

FLAGS = -Wall -Werror -Wextra

C_FILES +=  ft_memset.c ft_bzero.c ft_memccpy.c ft_memchr.c
C_FILES +=  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strlen.c
C_FILES +=  ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c
C_FILES +=  ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c
C_FILES +=  ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c
C_FILES +=  ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c
C_FILES +=  ft_isprint.c ft_toupper.c ft_tolower.c
C_FILES +=  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c
C_FILES +=  ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c
C_FILES +=  ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c
C_FILES +=  ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c
C_FILES +=  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c
C_FILES +=  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c
C_FILES +=	ft_islower.c ft_isupper.c ft_strlcat.c ft_isspace.c

O_FILES = $(C_FILES:.c=.o)

all : $(NAME)

$(NAME) :
		gcc -c $(FLAGS) $(C_FILES) -I.
		ar rc $(NAME) $(O_FILES)
		ranlib $(NAME)

clean :
		/bin/rm -f $(O_FILES)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
