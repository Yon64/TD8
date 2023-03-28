#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>


void creationJoueur(Joueur* j){
    j->nom=malloc(100*sizeof(char));
    printf("Nom : ");
    scanf("%s",j->nom);

    j->prenom=malloc(100*sizeof(char));
    printf("Prénom : ");
    scanf("%s",j->prenom);

    j->poste=malloc(100*sizeof(char));
    printf("Poste : ");
    scanf("%s",j->poste);

    printf("Numero : ");
    scanf("%d",&j->numero);

    printf("Age : ");
    scanf("%d",&j->age);

    printf("Nombre de but : ");
    scanf("%d",&j->nb_but);
}

void afficherJoueur(Joueur j){
    printf("-------------------------\n");
    printf("Nom : %s\n",j.nom);
    printf("Prénom : %s\n",j.prenom);
    printf("Poste : %s\n",j.poste);
    printf("Numero : %d\n",j.numero);
    printf("Age : %d\n",j.age);
    printf("Nombre de Buts : %d\n",j.nb_but);

}

void creationEquipe(Equipe* j){
    j->nom=malloc(100*sizeof(char));
    printf("Nom : ");
    scanf("%s",j->nom);

    j->pays=malloc(100*sizeof(char));
    printf("Pays : ");
    scanf("%s",j->pays);

    j->championnat=malloc(100*sizeof(char));
    printf("Championnat : ");
    scanf("%s",j->championnat);

    printf("Classement : ");
    scanf("%d",&j->classement);

    j->nb_joueur=0;
}

void ajouterJoueur(Equipe* e,Joueur j);
void afficherEquipe(Equipe e);
Joueur meilleurButeur(Equipe e);
int compareEquipe(Equipe e1,Equipe e2);