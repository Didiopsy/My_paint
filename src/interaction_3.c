/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void create_intercadre(struct fenetre *screen)
{
    screen->intcdr_text = sfTexture_createFromFile("./img/inter.png", NULL);
    screen->intcdr_sprite = sfSprite_create();
    sfSprite_setTexture(screen->intcdr_sprite, screen->intcdr_text, sfTrue);
}

void interclick_pen(struct fenetre *screen)
{
    sfVector2f pos = {0, 1};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}

void interclick_gom(struct fenetre *screen)
{
    sfVector2f pos = {0, 100};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}

void interclick_save(struct fenetre *screen)
{
    sfVector2f pos = {0, 880};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}

void interclick_noir(struct fenetre *screen)
{
    sfVector2f pos = {0, 410};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->intcdr_sprite, scale);
    sfSprite_setPosition(screen->intcdr_sprite, pos);
    if (screen->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_drawSprite(screen->win, screen->intcdr_sprite, NULL);
    }
}
