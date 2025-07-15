#Variables
NAME = libft.a

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = obj

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)
AR = ar rcs
RM = rm -f
MKDIR = mkdir -p

#Rules
all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
