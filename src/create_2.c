/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void carre(struct fenetre *screen)
{
    feuille_blanche(screen);
    peinture_bleu(screen);
    peinture_noir(screen);
    peinture_rouge(screen);
    peinture_vert(screen);
    init_ecrit(screen);
}

void create_quit(struct fenetre *screen)
{
    sfVector2f quit_pos = {5, 975};
    sfVector2f quit_scale = {0.12, 0.12};

    screen->quit_texture = sfTexture_createFromFile("./img/quit.png", NULL);
    screen->quit_sprite = sfSprite_create();
    sfSprite_setTexture(screen->quit_sprite, screen->quit_texture, sfTrue);
    sfSprite_setScale(screen->quit_sprite, quit_scale);
    sfSprite_setPosition(screen->quit_sprite, quit_pos);
}

void create_save(struct fenetre *screen)
{
    sfVector2f save_pos = {2, 880};
    sfVector2f save_scale = {0.13, 0.13};

    screen->save_texture = sfTexture_createFromFile("./img/save.png", NULL);
    screen->save_sprite = sfSprite_create();
    sfSprite_setTexture(screen->save_sprite, screen->save_texture, sfTrue);
    sfSprite_setScale(screen->save_sprite, save_scale);
    sfSprite_setPosition(screen->save_sprite, save_pos);
}

void create_menu(struct fenetre *screen)
{
    sfVector2f menu_pos = {100, 2};
    sfVector2f menu_scale = {0.15, 0.15};

    screen->menu_text = sfTexture_createFromFile("./img/menu.png", NULL);
    screen->menu_sprite = sfSprite_create();
    sfSprite_setTexture(screen->menu_sprite, screen->menu_text, sfTrue);
    sfSprite_setScale(screen->menu_sprite, menu_scale);
    sfSprite_setPosition(screen->menu_sprite, menu_pos);
}
