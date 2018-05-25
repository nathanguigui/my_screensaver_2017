/*
** EPITECH PROJECT, 2017
** my_screensaver.h
** File description:
** 
*/

#ifndef MY_PRINTF
#define MY_PRINTF
#include <SFML/Graphics.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int	set_pixels_01(sfUint8 *pix, sfTexture *text, sfRenderWindow *wind);
int	main(int argc, char const *argv[]);
sfRenderWindow	*create_window(void);
int	handle_event(int nbr, sfRenderWindow *window);
int	def_case(int nbr, sfRenderWindow *window);
int	start_anim(int nbr, sfRenderWindow *window);
int	detect_case(char const *str);
int	display_error(int c, char const *av);
int	display_help(void);
int	display_desc(void);
int	my_put_nbr(int nb);
int	my_putstr(char const *str);
int my_str_isnum(char const *str);
int my_str_isnum(char const *str);
int	my_putchar(char c);

#endif