# VARIABLES
CC= cc
NAME= libft.a
# Compilation flags
CFLAGS= -Wall -Wextra -Werror -c
# All the font code for the library
FILES= srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c\

INCLUDES = -I includes

# Same names of font code files but with .o instead of .c
OBJ= $(FILES:%.c=%.o)

# RULES
# By default rule
all:$(NAME)
# Generating libft.h
$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)
# Generating all .o files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all