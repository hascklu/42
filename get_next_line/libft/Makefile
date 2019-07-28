
NAME = libft.a

FLAGS = -Wall -Werror -Wextra

C_FILES +=  sources/ft_memset.c sources/ft_bzero.c sources/ft_memccpy.c
C_FILES +=	sources/ft_memchr.c sources/ft_memcmp.c sources/ft_memcpy.c
C_FILES +=	sources/ft_memmove.c sources/ft_strlen.c sources/ft_strlcat.c
C_FILES +=  sources/ft_strdup.c sources/ft_strcpy.c sources/ft_strncpy.c
C_FILES +=  sources/ft_strncat.c sources/ft_strchr.c sources/ft_strrchr.c
C_FILES +=  sources/ft_strnstr.c sources/ft_strcmp.c sources/ft_strncmp.c
C_FILES +=  sources/ft_isdigit.c sources/ft_isalpha.c sources/ft_isalnum.c
C_FILES +=  sources/ft_isprint.c sources/ft_toupper.c sources/ft_tolower.c
C_FILES +=  sources/ft_memalloc.c sources/ft_memdel.c sources/ft_strnew.c
C_FILES +=  sources/ft_strclr.c sources/ft_striter.c sources/ft_striteri.c
C_FILES +=  sources/ft_strmapi.c sources/ft_strequ.c sources/ft_strnequ.c
C_FILES +=  sources/ft_strjoin.c sources/ft_strtrim.c sources/ft_strsplit.c
C_FILES +=  sources/ft_putchar.c sources/ft_putchar_fd.c sources/ft_putendl.c
C_FILES +=  sources/ft_putnbr.c sources/ft_putnbr_fd.c sources/ft_putstr.c
C_FILES +=	sources/ft_islower.c sources/ft_isupper.c sources/ft_lstadd.c
C_FILES +=	sources/ft_lstdelone.c sources/ft_lstiter.c sources/ft_lstmap.c
C_FILES +=	sources/ft_isspace.c sources/ft_strcat.c sources/ft_strstr.c
C_FILES +=  sources/ft_strdel.c sources/ft_strmap.c sources/ft_strsub.c
C_FILES +=	sources/ft_putstr_fd.c sources/ft_lstdel.c sources/ft_lstnew.c
C_FILES +=	sources/ft_atoi.c sources/ft_isascii.c sources/ft_itoa.c
C_FILES +=	sources/ft_putendl_fd.c sources/ft_open.c

O_FILES = $(C_FILES:.c=.o)

LIBINC = -I ./includes/

CC = clang

all : $(NAME)

$(O_FILES) : %.o: %.c
		@$(CC) $(FLAGS) -o $@ -c $< $(LIBINC)

$(NAME) : $(O_FILES)
		@ar rc $(NAME) $(O_FILES)
		@ranlib $(NAME)

clean :
		@/bin/rm -f $(O_FILES)

fclean : clean
		@/bin/rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
