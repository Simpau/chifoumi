#include "chifoumi.hpp"
#include <iostream>

int main(char **argv){

  std::String choixHumain="toto";
  std::String choixBot;
  
  /// Mise en forme du jeux pour terminal
  std::cout << "**** Chifoumi **** \n" << std::endl;

  while (choixHumain != "quit"){
  std::cout << "move (rock, paper, scissors, quit): " << std::endl;

  /// Récupếration du choix humain
  cin >> choixHumain << std::endl;

  /// Réalisation du choix IA
  std::cout << "\n" << std::endl;
  choixBot=choixRandom();
  
  /// Calcul du résultat de la partie
  resultat(choixBot,choixHumain);

  std::cout << "\n" << std::endl;  
  }
  return 0;
}
