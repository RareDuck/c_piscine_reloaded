# VARIABLES
CC= cc
NAME= ft_display_file
# Compilation flags
CFLAGS= -Wall -Wextra -Werror
# All the font code for the library
FILES= main.c\
		ft_display_file.c\
		ft_putchar.c\
		ft_puterr.c

OBJ = $(FILES:.c=.o)

# RULES
# By default rule
all:$(NAME)
# Generating program
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Generating all .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rules
clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re all