#ifndef __soccer_H_
#define __soccer_H_

struct Joueur {
    char* nom;
    char* prenom;
    char* poste;
    int numero;
    int age;
    int nb_but;
};
typedef struct Joueur Joueur;

struct Equipe {
    char* nom;
    char* pays;
    char* championnat;
    int classement;
    int nb_joueur;
    Joueur* mes_joueurs;
};
typedef struct Equipe Equipe;

void creationJoueur(Joueur* j);
void afficherJoueur(Joueur j);
void creationEquipe(Equipe* e);
void ajouterJoueur(Equipe* e,Joueur j);
void afficherEquipe(Equipe e);
Joueur meilleurButeur(Equipe e);
int compareEquipe(Equipe e1,Equipe e2);

#endif