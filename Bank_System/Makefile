NAME    = mybank
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -I includes

BIN_DIR = app
SRCS    = src/main.c \
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

OBJS    = $(SRCS:.c=.o)
TARGET  = $(BIN_DIR)/$(NAME)

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -rf $(BIN_DIR)

re: fclean all

run: all
	@./$(TARGET)

.PHONY: all clean fclean re run
