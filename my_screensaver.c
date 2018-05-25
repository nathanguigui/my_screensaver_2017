/*
** EPITECH PROJECT, 2017
** my_screensaver.c
** File description:
** 
*/

int	main(int argc, char const *argv[])
{
	if(argc != 2) {
		display_error(argc, argv[0]);
		return (84);
	} if(argv[1][0] == '-') {
		if(argv[1][1] == 'h') {
			display_help();
			return (0);
		} else if(argv[1][1] == 'd') {
			display_desc();
			return (0);
		}
	} if(my_str_isnum(argv[1]) == 84)
		return(84);
	detect_case(argv[1]);
	
	return (0);
}