/*
** EPITECH PROJECT, 2017
** lib_disp.c
** File description:
** 
*/

int	display_error(int c, char const *av)
{
	my_putstr(av);
	my_putstr(":  bad arguments:  ");
	my_put_nbr(c - 1);
	my_putstr(" given but 1 is required\n");
	my_putstr("retry with -h\n");
	return (0);
}

int	display_help(void)
{
	my_putstr("animation rendering in a CSFML window.\n\n");
	my_putstr("USAGE\n");
	my_putstr(" ./my_screensaver\t[OPTIONS] animation_id\n");
	my_putstr(" animation_id\t\tID of the animation to \
process (between 1 and 20).\n\n");
	my_putstr("OPTIONS\n");
	my_putstr(" -d\t\t\tprint the description of all the \
animations and quit.\n");
	my_putstr(" -h\t\t\tprint the usage and quit.\n\n");
	my_putstr("USER INTERACTIONS\n");
	my_putstr(" LEFT_ARROW\t\tswitch to the previous animation.\n");
	my_putstr(" RIGHT_ARROW\t\tswitch to the next animation.\n\n");
	return (0);
}

int	display_desc(void)
{
	my_putstr("1: Noise\n");
	return (0);
}