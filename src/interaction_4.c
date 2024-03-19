/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void interclick_vert(struct fenetre *screen)
{
    sfVector2f pos = {0, 340};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}

void interclick_rouge(struct fenetre *screen)
{
    sfVector2f pos = {0, 270};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}

void interclick_bleu(struct fenetre *screen)
{
    sfVector2f pos = {0, 200};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}
