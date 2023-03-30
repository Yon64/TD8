#include "soccer.h"
#include <stdio.h>
#include <stdlib.h>


void creationJoueur(Joueur* j){
    j->nom=malloc(100*sizeof(char));
    printf("Nom : \n");
    scanf("%s",j->nom);

    j->prenom=malloc(100*sizeof(char));
    printf("Prénom : \n");
    scanf("%s",j->prenom);

    j->poste=malloc(100*sizeof(char));
    printf("Poste : \n");
    scanf("%s",j->poste);

    printf("Numero : \n");
    scanf("%d",&j->numero);

    printf("Age : \n");
    scanf("%d",&j->age);

    printf("Nombre de but : \n");
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
    printf("Nom : \n");
    scanf("%s",j->nom);

    j->pays=malloc(100*sizeof(char));
    printf("Pays : \n");
    scanf("%s",j->pays);

    j->championnat=malloc(100*sizeof(char));
    printf("Championnat : \n");
    scanf("%s",j->championnat);

    printf("Classement : \n");
    scanf("%d",&j->classement);

    j->nb_joueur=0;
    j->mes_joueurs=malloc(1*sizeof(Joueur));
}

void ajouterJoueur(Equipe* e,Joueur j){
    e->nb_joueur++;
    e->mes_joueurs=realloc(e->mes_joueurs,e->nb_joueur*sizeof(Joueur));
    e->mes_joueurs[e->nb_joueur-1].nom = j.nom;
    e->mes_joueurs[e->nb_joueur-1].prenom = j.prenom;
    e->mes_joueurs[e->nb_joueur-1].poste = j.poste;
    e->mes_joueurs[e->nb_joueur-1].numero = j.numero;
    e->mes_joueurs[e->nb_joueur-1].age = j.age;
    e->mes_joueurs[e->nb_joueur-1].nb_but = j.nb_but;
}

void afficherEquipe(Equipe e){
    printf("------------------------------------------\n");
    printf("EQUIPE : %s\n",e.nom);
    printf("Pays : %s\n",e.pays);
    printf("Championnat : %s\n",e.championnat);
    printf("Classement : %d\n",e.classement);
    printf("Nombre de Joueurs : %d\n",e.nb_joueur);
    for(int i=0;i<e.nb_joueur;i++){
        afficherJoueur(e.mes_joueurs[i]);
        printf("\n");
    }
}

Joueur meilleurButeur(Equipe e){
    Joueur best=e.mes_joueurs[0];
    for (int i=1;i<e.nb_joueur-1;i++){
        if (e.mes_joueurs[i].nb_but>best.nb_but){
            best=e.mes_joueurs[i];
        }
    }
    return best;
}

int compareEquipe(Equipe e1,Equipe e2){
    if (e1.classement<e2.classement){
        return 2;
    }else{
        if (e1.classement>e2.classement){
            return 1;
        }else{
            if (e1.classement==e2.classement){
                return 0;
            }else{
                return -1;
            }
        }
    }
}