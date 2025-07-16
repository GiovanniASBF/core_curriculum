#Variables
NAME = ft_display_file

SRC = ft_display_file.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

#Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all