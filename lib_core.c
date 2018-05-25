/*
** EPITECH PROJECT, 2017
** lib_core.c
** File description:
** 
*/

const int MAX = 1;

sfRenderWindow	*create_window(void)
{
	sfVideoMode mode = {800, 600, 32};
	sfRenderWindow* window;
	char *tit = "my_screensaver";

	window = sfRenderWindow_create(mode, tit, sfResize | sfClose, NULL);
	if (!window)
        	return (NULL);
        else
        	return (window);
}

int	handle_event(int nbr, sfRenderWindow *window)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(window, &event)) {
        	if (event.type == sfEvtClosed) {
			sfRenderWindow_close(window);
			return(84);
        	}
		if (event.key.code == sfKeyLeft) {
			if (nbr != 1)
				nbr = nbr - 1;
			def_case(nbr, window);
		} else if (event.key.code == sfKeyRight) {
			if (nbr != MAX)
				nbr = nbr + 1;
			def_case(nbr, window);
		}

		
        }
        return (nbr);
}