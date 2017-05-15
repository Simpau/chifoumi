#include "chifoumi.hpp"
#include <iostream>
#include <random>
#include <string>


/// Choix de l'IA
std::string Chifoumi::choixRandom() {
  std::string move[3];
  move[0]="pierre";
  move[1]="feuille";
  move[2]="ciseaux";

  int i=rand()%2;

  return move[i];  
}
/// Resultat du match
void Chifoumi::resultat(std::string choixIA, std::string choixJoueur){
  /// Tableau des resultats
  std::string res[3];
  res[0]="draw";
  res[1]="win";
  res[2]="loose";

  /// Tableau des choix
  std::string move[3];
  move[0]="pierre";
  move[1]="feuille";
  move[2]="ciseaux";

  /// Test d'égalité
  if(choixIA==choixJoueur){
    std::cout << res[0] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
    std::endl;
    }
  /// Cas de victoire joueur humain
  if((choixIA==move[0] && choixJoueur==move[1]) ||
    (choixIA==move[1] && choixJoueur==move[2]) ||
      (choixIA==move[2] && choixJoueur==move[0]) )
   {
   std::cout << res[1] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
   std::endl;
    }
  /// Cas de victoire IA
  if((choixIA==move[1] && choixJoueur==move[0]) ||
     (choixIA==move[0] && choixJoueur==move[2]) ||
     (choixIA==move[2] && choixJoueur==move[1]))
   {
   std::cout << res[2] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
   std::endl;
    }
}
