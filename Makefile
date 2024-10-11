CFLAGS += -Wall -Wextra -Werror
NAME = libft.a
SOURCES = 	main.c \
			parse_dictionary.c \
			convert_num_to_letter.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)
$(NAME): $(OBJECTS)
	cc $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re:
