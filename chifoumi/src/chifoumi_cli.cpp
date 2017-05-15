#include "chifoumi.hpp"
#include <string>
#include <iostream>


int main(){

  std::string choixHumain="toto";
  std::string choixBot;
  
  /// Mise en forme du jeux pour terminal
  std::cout << "**** Chifoumi **** \n" << std::endl;

  while (choixHumain != "quit"){
  std::cout << "move (rock, paper, scissors, quit): " << std::endl;

  /// Récupếration du choix humain
std::cin >> choixHumain;

  /// Réalisation du choix IA
  std::cout << "\n" << std::endl;
choixBot=Chifoumi::choixRandom();
  
  /// Calcul du résultat de la partie
Chifoumi::resultat(choixBot,choixHumain);

  std::cout << "\n" << std::endl;  
  }
  return 0;
}
