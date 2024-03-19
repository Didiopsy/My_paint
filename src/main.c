/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void draw_liste(struct fenetre *screen)
{
    int i = 0;

    while (i != screen->i) {
        PAS(screen->win, screen->paint_liste[i], NULL);
        i++;
    }
}

void draw(struct fenetre *screen)
{
    sfRenderWindow_drawSprite(screen->win, screen->fond_sprite, NULL);
    sfRenderWindow_drawSprite(screen->win, screen->pen_sprite, NULL);
    sfRenderWindow_drawSprite(screen->win, screen->gom_sprite, NULL);
    sfRenderWindow_drawSprite(screen->win, screen->save_sprite, NULL);
    sfRenderWindow_drawSprite(screen->win, screen->quit_sprite, NULL);
    sfRenderWindow_drawRectangleShape(screen->win, screen->feuille, NULL);
    sfRenderWindow_drawRectangleShape(screen->win, screen->bleu, NULL);
    sfRenderWindow_drawRectangleShape(screen->win, screen->rouge, NULL);
    sfRenderWindow_drawRectangleShape(screen->win, screen->vert, NULL);
    sfRenderWindow_drawRectangleShape(screen->win, screen->noir, NULL);
    draw_liste(screen);
}

void display(struct fenetre *screen)
{
    while (sfRenderWindow_isOpen(screen->win)) {
        close_event(screen);
        mouse(screen);
        click(screen);
        draw(screen);
        interaction(screen);
        sfRenderWindow_display(screen->win);
    }
    sfRenderWindow_destroy(screen->win);
}

int main(void)
{
    struct fenetre screen;

    create(&screen);
    display(&screen);
    return 0;
}
