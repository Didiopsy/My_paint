/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void create_cadre(struct fenetre *screen)
{
    screen->cadre_text = sfTexture_createFromFile("./img/cadre.png", NULL);
    screen->cadre_sprite = sfSprite_create();
    sfSprite_setTexture(screen->cadre_sprite, screen->cadre_text, sfTrue);
}

void interaction(struct fenetre *screen)
{
    inter_pen(screen);
    inter_gom(screen);
    inter_quit(screen);
    inter_save(screen);
    inter_noir(screen);
    inter_bleu(screen);
    inter_rouge(screen);
    inter_vert(screen);
}

void inter_pen(struct fenetre *screen)
{
    sfFloatRect bnd = sfSprite_getGlobalBounds(screen->pen_sprite);
    sfVector2f pos = {0, 1};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_pen(screen);
    }
}

void inter_gom(struct fenetre *screen)
{
    sfFloatRect bnd = sfSprite_getGlobalBounds(screen->gom_sprite);
    sfVector2f pos = {0, 100};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_gom(screen);
    }
}

void inter_quit(struct fenetre *screen)
{
    sfFloatRect bnd = sfSprite_getGlobalBounds(screen->quit_sprite);
    sfVector2f pos = {0, 975};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
    }
}
