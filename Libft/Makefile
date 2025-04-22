NAME = libft.a

SRC = ft_atoi.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_tolower.c \
	ft_memcpy.c \
	ft_strchr.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_strdup.c
	

OBJ = $(SRC:.c=.o)

CC = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
 
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f '*.o'
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

