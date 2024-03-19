/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void click_quit(struct fenetre *screen)
{
    sfFloatRect quit_bnd = sfSprite_getGlobalBounds(screen->quit_sprite);

    if (sfFloatRect_contains(&quit_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        sfRenderWindow_close(screen->win);
    }
}

void click_paint(struct fenetre *screen)
{
    sfFloatRect paint_bnd = sfRectangleShape_getGlobalBounds(screen->feuille);

    if (sfFloatRect_contains(&paint_bnd, screen->mouse_i.x,
    screen->mouse_i.y)) {
        ecrit(screen);
    }
}

void click(struct fenetre *screen)
{
    if (screen->event.type == sfEvtMouseButtonPressed) {
        click_quit(screen);
        click_paint(screen);
        click_noir(screen);
        click_vert(screen);
        click_pen(screen);
        click_rouge(screen);
        click_bleu(screen);
        click_gom(screen);
    }
}

void close_event(struct fenetre *screen)
{
    while (sfRenderWindow_pollEvent(screen->win, &screen->event)) {
        if (screen->event.type == sfEvtClosed) {
            sfRenderWindow_close(screen->win);
        }
    }
}
