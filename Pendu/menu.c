//
// Created by thoma on 06/12/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "jeu.h"
#include "dico.h"

void affich_menu()  //fonction qui affiche le menu du jeu
{
    printf("\nBienvenue dans le jeux du pendu \n \n"
           "tapez 1 pour lancer une partie\n"
           "tapez 2 pour ajouter un mot a la liste\n"
           "tapez 3 pour quitter le jeu\n");
}

void saisie_menu() //fonction qui prend le choix de l'utilisateur
{
    int nb_entre=0;
    scanf("%d",&nb_entre);

   switch (nb_entre)
   {
       case 1:
           debut_jeu();
           break;
       case 2:
           modif();
           break;
       case 3:

           break;
       default:
           printf("\nEntre 1 et 3 on a dit!!!\n");
           saisie_menu();
           break;

   }
}