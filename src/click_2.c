/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void click_pen(struct fenetre *screen)
{
    sfFloatRect pen_bnd = sfSprite_getGlobalBounds(screen->pen_sprite);

    if (sfFloatRect_contains(&pen_bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        screen->paint_color = sfBlack;
    }
}
