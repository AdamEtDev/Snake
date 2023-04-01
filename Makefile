##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	src/main.cpp	\
		src/algo.cpp	\
		src/display.cpp	\
		src/user_input.cpp

CPPFLAGS	=	-I./include

CFLAGS	=	-W -Wall

NAME	=	snake

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(SRC) $(CPPFLAGS) $(LFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f '#*#'

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
