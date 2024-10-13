CC := cc
CFLAGS := -Wall -Wextra -Werror
NAME := libft.a
SOURCES := 	$(wildcard ft_*.c)
HEADER := libft.h

OBJECTS := $(SOURCES:.c=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re