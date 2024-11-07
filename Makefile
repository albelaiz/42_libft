NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SR =	ft_atoi.c       ft_isalpha.c    ft_memchr.c     ft_memset.c     ft_strlcpy.c    ft_strrchr.c\
		ft_bzero.c      ft_isascii.c    ft_memcmp.c     ft_strchr.c     ft_strlen.c\
		ft_calloc.c     ft_isdigit.c    ft_memcpy.c     ft_strdup.c     ft_strncmp.c    ft_tolower.c\
		ft_isalnum.c    ft_isprint.c    ft_memmove.c    ft_strlcat.c    ft_strnstr.c    ft_toupper.c

OB = $(SR:.c=.o)

all: $(NAME)

$(NAME): $(OB)
		ar rcs $(NAME) $(OB)

%.o: %.c libft.h 
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OB)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re