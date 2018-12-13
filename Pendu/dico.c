//
// Created by thoma on 08/12/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "dico.h"


char *mot_a_trouver() { // recupere le mot dans le repetoire

    int aleatoire = 0;

    FILE *fichier = NULL;
    char *tabmot = malloc(sizeof(char) * 100);


    fichier = fopen("dicopendu.txt", "r");


    srand(time(NULL));
    aleatoire = (rand() % (2000 - +1)) + 1;// choisie un chiffre au hasard

    for (int i = 0; i < aleatoire; i++) { //prend le mot a la ligne correspondant au nombre choisie au hasard
        fscanf(fichier, "%s", tabmot);
    }

    fclose(fichier);

    return tabmot;


}

void modif() {//recupre un mot de l'utilisateur et l'ajoute au repertoire
    char mot[50];

    printf("\nEntrez votre mot en majuscule svp\n");
    scanf("%s", mot);

    FILE *fichier = NULL;

    fichier = fopen("dicopendu.txt", "a");
    fprintf(fichier, "%s", mot);
}
