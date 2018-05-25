/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** 
*/

int	my_getnbr(char const *str)
{
	int nb;
	int a = 0;

	while(str[a] != '\0'){
		if(str[a] >= '0' && str[a] <= '9'){
			nb = nb * 10;
			nb = nb + str[a] - 48;
		}
		a = a + 1;
	}
	if(str[0] == '-'){
		nb = nb * -1;
	}
	return (nb);
}