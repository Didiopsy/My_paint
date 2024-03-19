/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void click_gom(struct fenetre *screen)
{
    sfFloatRect gom_bnd = sfSprite_getGlobalBounds(screen->gom_sprite);

    if (sfFloatRect_contains(&gom_bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        screen->paint_color = sfWhite;
    }
}

void click_vert(struct fenetre *screen)
{
    sfFloatRect paint_bnd = sfRectangleShape_getGlobalBounds(screen->vert);

    if (sfFloatRect_contains(&paint_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        screen->paint_color = sfGreen;
    }
}

void click_noir(struct fenetre *screen)
{
    sfFloatRect paint_bnd = sfRectangleShape_getGlobalBounds(screen->noir);

    if (sfFloatRect_contains(&paint_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        screen->paint_color = sfBlack;
    }
}

void click_rouge(struct fenetre *screen)
{
    sfFloatRect paint_bnd = sfRectangleShape_getGlobalBounds(screen->rouge);

    if (sfFloatRect_contains(&paint_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        screen->paint_color = sfRed;
    }
}

void click_bleu(struct fenetre *screen)
{
    sfFloatRect paint_bnd = sfRectangleShape_getGlobalBounds(screen->bleu);

    if (sfFloatRect_contains(&paint_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        screen->paint_color = sfBlue;
    }
}
