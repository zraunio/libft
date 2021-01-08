NAME = libft.a

SRC_DIR = ./
SRC =  	ascii/ft_isalnum.c \
		ascii/ft_isalpha.c \
		ascii/ft_isascii.c \
		ascii/ft_isprint.c \
		ascii/ft_ispunct.c \
		ascii/ft_isspace.c \
		convert/ft_atoi.c \
		convert/ft_itoa_base.c \
		convert/ft_itoa.c \
		convert/ft_lutoa_base.c \
		convert/ft_lutoa.c \
		convert/ft_tolower.c \
		convert/ft_toupper.c \
		convert/ft_utoa_base.c \
		convert/ft_utoa.c \
		list/ft_lstadd.c \
		list/ft_lstdel.c \
		list/ft_lstdelone.c \
		list/ft_lstiter.c \
		list/ft_lstmap.c \
		list/ft_lstnew.c \
		math/dig_count_base.c \
		math/dig_count.c \
		math/ft_abs.c \
		math/ft_float_abs.c \
		math/ft_wdcounter.c \
		mem/ft_bzero.c \
		mem/ft_memalloc.c \
		mem/ft_memccpy.c \
		mem/ft_memchr.c \
		mem/ft_memcmp.c \
		mem/ft_memcpy.c \
		mem/ft_memdel.c \
		mem/ft_memmove.c \
		mem/ft_memset.c \
		mem/ft_realloc.c \
		print/ft_putchar_fd.c \
		print/ft_putchar.c \
		print/ft_putendl_fd.c \
		print/ft_putendl.c \
		print/ft_putnbr_fd.c \
		print/ft_putnbr.c \
		print/ft_putstr_fd.c \
		print/ft_putstr.c \
		print/get_next_line.c \
		str/ft_strcat.c \
		str/ft_strchr.c \
		str/ft_strclr.c \
		str/ft_strcmp.c \
		str/ft_strcpy.c \
		str/ft_strctrim.c \
		str/ft_strdel.c \
		str/ft_strdup.c \
		str/ft_strequ.c \
		str/ft_striter.c \
		str/ft_striteri.c \
		str/ft_strjoin.c \
		str/ft_strlcat.c \
		str/ft_strlen.c \
		str/ft_strmap.c \
		str/ft_strmapi.c \
		str/ft_strncat.c \
		str/ft_strmapi.c \
		str/ft_strncat.c \
		str/ft_strncmp.c \
		str/ft_strnequ.c \
		str/ft_strnew.c \
		str/ft_strnstr.c \
		str/ft_strnstr.c \
		str/ft_strrchr.c \
		str/ft_strsplit.c \
		str/ft_strstr.c \
		str/ft_strsub.c \
		str/ft_strtrim.c
	
OUTPUT = $(addprefix $(SRC_DIR), $(SRC_BASE))

HDR_SRC= ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HDR_SRC)
	ar rc $(NAME) $(OUTPUT)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
