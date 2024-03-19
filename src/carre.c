/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main.c
*/
#include "../my_project.h"

void feuille_blanche(struct fenetre *screen)
{
    sfVector2f size = {1800, 975};
    sfVector2f pos = {75, 70};

    screen->feuille = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->feuille, sfWhite);
    sfRectangleShape_setSize(screen->feuille, size);
    sfRectangleShape_setPosition(screen->feuille, pos);
}

void peinture_bleu(struct fenetre *screen)
{
    sfVector2f size = {50, 50};
    sfVector2f pos = {10, 200};

    screen->bleu = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->bleu, sfBlue);
    sfRectangleShape_setSize(screen->bleu, size);
    sfRectangleShape_setPosition(screen->bleu, pos);
}

void peinture_rouge(struct fenetre *screen)
{
    sfVector2f size = {50, 50};
    sfVector2f pos = {10, 270};

    screen->rouge = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->rouge, sfRed);
    sfRectangleShape_setSize(screen->rouge, size);
    sfRectangleShape_setPosition(screen->rouge, pos);
}

void peinture_vert(struct fenetre *screen)
{
    sfVector2f size = {50, 50};
    sfVector2f pos = {10, 340};

    screen->vert = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->vert, sfGreen);
    sfRectangleShape_setSize(screen->vert, size);
    sfRectangleShape_setPosition(screen->vert, pos);
}

void peinture_noir(struct fenetre *screen)
{
    sfVector2f size = {50, 50};
    sfVector2f pos = {10, 410};

    screen->noir = sfRectangleShape_create();
    sfRectangleShape_setFillColor(screen->noir, sfBlack);
    sfRectangleShape_setSize(screen->noir, size);
    sfRectangleShape_setPosition(screen->noir, pos);
}
