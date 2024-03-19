/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void create(struct fenetre *screen)
{
    sfVector2f ui = {0.18, 0.18};

    screen->scale = ui;
    create_win(screen);
    create_fond(screen);
    create_gom(screen);
    create_pen(screen);
    create_quit(screen);
    create_save(screen);
    create_cadre(screen);
    create_intercadre(screen);
    carre(screen);
}

void create_pen(struct fenetre *screen)
{
    sfVector2f pen_pos = {-10, 1};

    screen->pen_texture = sfTexture_createFromFile("./img/pen.png", NULL);
    screen->pen_sprite = sfSprite_create();
    sfSprite_setTexture(screen->pen_sprite, screen->pen_texture, sfTrue);
    sfSprite_setScale(screen->pen_sprite, screen->scale);
    sfSprite_setPosition(screen->pen_sprite, pen_pos);
}

void create_gom(struct fenetre *screen)
{
    sfVector2f gom_pos = {-5, 100};
    sfVector2f gom_scale = {0.15, 0.15};

    screen->gom_texture = sfTexture_createFromFile("./img/gom.png", NULL);
    screen->gom_sprite = sfSprite_create();
    sfSprite_setTexture(screen->gom_sprite, screen->gom_texture, sfTrue);
    sfSprite_setScale(screen->gom_sprite, gom_scale);
    sfSprite_setPosition(screen->gom_sprite, gom_pos);
}

void create_fond(struct fenetre *screen)
{
    sfVector2f sc = {1, 1};

    screen->fond_texture = sfTexture_createFromFile("./img/fond.png", NULL);
    screen->fond_sprite = sfSprite_create();
    sfSprite_setTexture(screen->fond_sprite, screen->fond_texture, sfTrue);
    sfSprite_setScale(screen->fond_sprite, sc);
}

void create_win(struct fenetre *screen)
{
    sfVideoMode t = {1920, 1080, 32};

    screen->mode = t;
    screen->win = SRWC(screen->mode, "SFMLwindow", ECR, NULL);
    sfRenderWindow_setFramerateLimit(screen->win, 30);
}
