/*
** EPITECH PROJECT, 2017
** lib_theme.c
** File description:
** 
*/

int	def_case(int nbr, sfRenderWindow *window)
{
	sfTexture* texture;
	texture = sfTexture_create(800, 600);
	sfUint8 *pixels = malloc(800 * 600 * 4);

	switch (nbr) {
		case 1:
			set_pixels_01(pixels, texture, window);
	}
	return (0);
}

int	start_anim(int nbr, sfRenderWindow *window)
{
	def_case(nbr, window);
	while (sfRenderWindow_isOpen(window)) {
		nbr = handle_event(nbr, window);
		def_case(nbr, window);
    		sfRenderWindow_display(window);
    	}
    	return (0);
}

int	detect_case(char const *str)
{
	switch (str[0]) {
		case '1':
			start_anim(1, create_window());
	}
	return (0);
}