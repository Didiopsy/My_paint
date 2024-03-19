/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void init_ecrit(struct fenetre *screen)
{
    sfVector2f size = {10, 10};

    screen->paint_liste = malloc(sizeof(sfRectangleShape *) * 10000);
    screen->paint_size = size;
    screen->paint_color = sfBlack;
    screen->i = 0;
}

void ecrit(struct fenetre *screen)
{
    screen->paint_one = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->paint_one, screen->paint_color);
    sfRectangleShape_setSize(screen->paint_one, screen->paint_size);
    sfRectangleShape_setPosition(screen->paint_one, screen->mouse_f);
    screen->paint_liste[screen->i] = screen->paint_one;
    screen->i++;
}
