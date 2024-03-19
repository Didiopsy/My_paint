/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void mouse(struct fenetre *screen)
{
    sfVector2i mi = sfMouse_getPositionRenderWindow(screen->win);
    sfVector2f mf = MFC(screen->win, mi, NULL);

    screen->mouse_i = mi;
    screen->mouse_f = mf;
}
