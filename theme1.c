/*
** EPITECH PROJECT, 2017
** theme1.c
** File description:
** 
*/

int	set_pixels_01(sfUint8 *pix, sfTexture *text, sfRenderWindow *wind)
{
	int i = 0;
	sfSprite *sprite;
	sprite = sfSprite_create();

	while (i != 800 * 600 * 4) {
		int k = (int) (255.0*rand()/(RAND_MAX+0.0));
		pix[i] = k;
		i = i + 1;
	}
	sfTexture_updateFromPixels(text, pix, 800, 600, 0, 0);
	sfSprite_setTexture(sprite, text, sfTrue);
	sfRenderWindow_drawSprite(wind, sprite, NULL);
	return (0);
}