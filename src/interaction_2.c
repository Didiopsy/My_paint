/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void inter_save(struct fenetre *screen)
{
    sfFloatRect bnd = sfSprite_getGlobalBounds(screen->save_sprite);
    sfVector2f pos = {0, 880};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_save(screen);
    }
}

void inter_noir(struct fenetre *screen)
{
    sfFloatRect bnd = sfRectangleShape_getGlobalBounds(screen->noir);
    sfVector2f pos = {0, 410};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_noir(screen);
    }
}

void inter_vert(struct fenetre *screen)
{
    sfFloatRect bnd = sfRectangleShape_getGlobalBounds(screen->vert);
    sfVector2f pos = {0, 340};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_vert(screen);
    }
}

void inter_rouge(struct fenetre *screen)
{
    sfFloatRect bnd = sfRectangleShape_getGlobalBounds(screen->rouge);
    sfVector2f pos = {0, 270};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_rouge(screen);
    }
}

void inter_bleu(struct fenetre *screen)
{
    sfFloatRect bnd = sfRectangleShape_getGlobalBounds(screen->bleu);
    sfVector2f pos = {0, 200};
    sfVector2f scale = {0.15, 0.15};

    sfSprite_setScale(screen->cadre_sprite, scale);
    sfSprite_setPosition(screen->cadre_sprite, pos);
    if (sfFloatRect_contains(&bnd, screen->mouse_i.x, screen->mouse_i.y)) {
        sfRenderWindow_drawSprite(screen->win, screen->cadre_sprite, NULL);
        interclick_bleu(screen);
    }
}
