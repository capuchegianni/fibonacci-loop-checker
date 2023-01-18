##
## EPITECH PROJECT, 2022
## STUMPER MAKEFILE
## File description:
## Makefile to compile stumper
##

SRC := 		src/main.c				\

OBJ := $(SRC:.c=.o)

NAME := project

WARNING_FLAGS := -Wall -Wextra -W -g

LIB_FLAGS := -I include/ -L ./lib -lmy

all: $(NAME)

build_lib:
	make -sC lib/my/

$(NAME): $(OBJ) build_lib
	gcc $(SRC) $(WARNING_FLAGS) -o $(NAME) $(LIB_FLAGS)

clean:
	make clean -sC lib/my/
	rm -f $(OBJ)

fclean: clean
	make fclean -sC lib/my/
	rm -f $(NAME)

re: fclean all
	make clean
