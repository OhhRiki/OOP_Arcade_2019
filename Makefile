##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation
##

NAME	=	arcade

SRC	=	src/arcade.cpp

OBJ	=	$(SRC:.cpp=.o)

HPATH	=	include/

CPPFLAGS	=	-I./include -Werror -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) -ldl

clean:
	rm -f *.o
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)
	rm -f ~*
	rm -f vgcore*

re: fclean all

.PHONY: all clean fclean re
