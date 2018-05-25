##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	*.c

NAME	=	my_screensaver

CFLAGS	=	-lc_graph_prog -include include/my_screensaver.h -o $(NAME)

all:
	gcc $(SRC) $(CFLAGS)

clean:
	echo

fclean: clean
	rm -f $(NAME)

re:	fclean all