NAME = mybank

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS = src/main.c \
       src/deposit.c \
       src/ft_putstr.c \
       src/ft_strlen.c \
       src/ft_str_is_numeric.c \
       src/ft_atoi.c \
       src/ft_putnbr.c \
       src/print_date.c \
       src/ft_readline.c \
       src/ft_atof.c \
       src/ft_putdouble.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run
