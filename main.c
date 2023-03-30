#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"soccer.h"

int main(){
  Joueur j1,j2,j3,j4,j5,j6;
  Equipe e1,e2;

  creationJoueur(&j1);
  creationJoueur(&j2);
  creationJoueur(&j3);
  creationJoueur(&j4);
  creationEquipe(&e1);

  ajouterJoueur(&e1,j1);
  ajouterJoueur(&e1,j2);
  ajouterJoueur(&e1,j3);
  ajouterJoueur(&e1,j4);
  afficherEquipe(e1);

  creationJoueur(&j5);
  creationJoueur(&j6);
  creationEquipe(&e2);
  ajouterJoueur(&e2,j5);
  ajouterJoueur(&e2,j6);

  afficherEquipe(e2);



  return 0;
}
