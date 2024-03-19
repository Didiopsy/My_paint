/*
** EPITECH PROJECT, 2023
** my_template
** File description:
** include/define , struct , def
*/
#ifndef MY_H_
    #define MY_H_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/Audio.h>
    #include <SFML/System.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #define SRWC sfRenderWindow_create
    #define ECR sfResize | sfClose
    #define MFC sfRenderWindow_mapPixelToCoords
    #define PAS sfRenderWindow_drawRectangleShape

typedef struct fenetre {

    sfVideoMode mode;
    sfRenderWindow *win;

    sfEvent event;
    sfVector2i mouse;
    sfClock *clock;
    sfTime time;

    sfRenderTexture *fond;
    sfSprite *fond_sprite;
    sfTexture *fond_texture;

    sfSprite *pen_sprite;
    sfTexture *pen_texture;

    sfSprite *gom_sprite;
    sfTexture *gom_texture;

    sfSprite *quit_sprite;
    sfTexture *quit_texture;

    sfSprite *save_sprite;
    sfTexture *save_texture;

    sfSprite *cadre_sprite;
    sfTexture *cadre_text;

    sfSprite *intcdr_sprite;
    sfTexture *intcdr_text;

    sfSprite *menu_sprite;
    sfTexture *menu_text;

    sfVector2f scale;

    sfVector2f mouse_f;
    sfVector2i mouse_i;

    sfRectangleShape *feuille;

    sfRectangleShape *bleu;
    sfRectangleShape *rouge;
    sfRectangleShape *vert;
    sfRectangleShape *noir;

    sfRectangleShape *paint_one;
    sfColor paint_color;
    sfVector2f paint_size;
    sfRectangleShape **paint_liste;
    int i;

} screen;

void close_event(struct fenetre *screen);

void disp(struct fenetre *screen);

void create(struct fenetre *screen);

void create_fond(struct fenetre *screen);

void create_win(struct fenetre *screen);

void create_pen(struct fenetre *screen);

void create_gom(struct fenetre *screen);

void create_quit(struct fenetre *screen);

void create_save(struct fenetre *screen);

void create_cadre(struct fenetre *screen);

void create_intercadre(struct fenetre *screen);

void create_menu(struct fenetre *screen);

void mouse(struct fenetre *screen);

void click(struct fenetre *screen);

void click_quit(struct fenetre *screen);

void click_paint(struct fenetre *screen);

void click_pen(struct fenetre *screen);

void click_gom(struct fenetre *screen);

void click_vert(struct fenetre *screen);

void click_noir(struct fenetre *screen);

void click_rouge(struct fenetre *screen);

void click_bleu(struct fenetre *screen);

void carre(struct fenetre *screen);

void feuille_blanche(struct fenetre *screen);

void peinture_bleu(struct fenetre *screen);

void peinture_rouge(struct fenetre *screen);

void peinture_vert(struct fenetre *screen);

void peinture_noir(struct fenetre *screen);

void init_ecrit(struct fenetre *screen);

void ecrit(struct fenetre *screen);

void interaction(struct fenetre *screen);

void inter_pen(struct fenetre *screen);

void inter_gom(struct fenetre *screen);

void inter_quit(struct fenetre *screen);

void inter_save(struct fenetre *screen);

void inter_noir(struct fenetre *screen);

void inter_vert(struct fenetre *screen);

void inter_rouge(struct fenetre *screen);

void inter_bleu(struct fenetre *screen);

void interclick_pen(struct fenetre *screen);

void interclick_gom(struct fenetre *screen);

void interclick_save(struct fenetre *screen);

void interclick_noir(struct fenetre *screen);

void interclick_vert(struct fenetre *screen);

void interclick_rouge(struct fenetre *screen);

void interclick_bleu(struct fenetre *screen);

#endif
