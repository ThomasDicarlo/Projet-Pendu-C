//
// Created by thoma on 06/12/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "jeu.h"
#include "dico.h"

void debut_jeu() //fonction qui verifie caractere par caractere si la lettre de l'utilisateur correspond a une lettre du mot
{
    char malettre = 0;
    int i = 0, testvie = 0,continuer = 0;
    int taille = 0;
    char affich[100] = "**************************************";
    char *motsecret = NULL;

    motsecret = mot_a_trouver();// recupere le mot du dico.c

    taille = strlen(motsecret);

    /*compte le nombre de caractere du mot pour afficher le bon nombre de"*"
     * la variable taille est utilisé dans les boucles for pour tester seulement le bon nombre de lettrres*/


    int vie = 8;

    while (vie > 0) { //permet d'arreter le programme quand on a perdu trop de vie

        printf("\ntapez votre lettre\n\n");

        malettre = lirelettre();//fonction qui permet de lire la lettre de l'utilisateur


        for (i = 0; i < taille; i++) { //verifie si la lettre de l'utilisateur est dans le mot

            if (malettre == motsecret[i]) {

                affich[i] = motsecret[i];//si la lettre dans le mot elle est garde en memoire dans le tableau affich

                testvie = 1;
            } else continue;


        }


        if (testvie == 0) {  //reire une vie si aucune lettres est dans le mot
            vie--;
        }
        printf("\nil vous reste %d vie\n", vie);

        for (int j = 0; j < taille; j++) {  // affiche le mot a trouver en "*****" et affiche les lettres trouvees
            printf("%c", affich[j]);
        }
        testvie = 0;  //reinisialise le testvie a ca valeur par defaut

        for (i = 0; i < taille; i++) {
            if (affich[i] == '*') {  //verifie si il y a encore des lettre a trouver
                continuer = 1;
            }

        }
        if (continuer == 0) {
            printf("\n\nc'est WIN!!");
            free(motsecret);
            exit(0);


        }
        continuer = 0;

    }
    printf("\nC'est perdu");
    free(motsecret);


}

char lirelettre() { //recupere l'entré utilisateur et met la lettre en majuscule
    char lettre = 0;

    lettre = getchar();
    lettre = toupper(lettre);

    while (getchar() != '\n');


    return lettre;
}