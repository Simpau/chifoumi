#include "chifoumi.hpp"
#include <iostream>
#include <random>


/// Choix de l'IA
std::String Chifoumi::choixRandom() {
  std::String move[2];
  move[0]="pierre";
  move[1]="feuille";
  move[2]="ciseaux";

  int i=rand()%3;

  return move[i];  
}
/// Resultat du match
void Chifumi::resultat(String choixIA, String choixJoueur){
  /// Tableau des resultats
  std:: String res[2]
  res[0]="draw";
  res[1]="win";
  res[2]="loose";

  /// Tableau des choix
  std::String move[2];
  move[0]="pierre";
  move[1]="feuille";
  move[2]="ciseaux";

  /// Test d'égalité
  if(choixIA=choixJoueur){
    std::cout << res[0] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
    std::endl;
    }
  /// Cas de victoire joueur humain
  if(choixIA=move[0] && choixJoueur=move[1] ||
    choixIA=move[1] && choixJoueur=move[2] ||
    choixIA=move[2] && choixJoueur=move[0] )
   {
   std::cout << res[1] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
   std::endl;
    }
  /// Cas de victoire IA
  if(choixIA=move[1] && choixJoueur=move[0] ||
    choixIA=move[0] && choixJoueur=move[2] ||
    choixIA=move[2] && choixJoueur=move[1] )
   {
   std::cout << res[2] <<  "( " << choixIA << "-" << choixJoueur << ") \n" <<
   std::endl;
    }
}
