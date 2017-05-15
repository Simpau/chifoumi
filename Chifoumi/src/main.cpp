#include "Chifoumi.hpp"
#include <string>
#include <iostream>


int main(int argc, char ** argv){
  Chifoumi result;
  std::string choix;
  
  /// Mise en forme du jeux pour terminal
  std::cout << "**** Chifoumi **** \n" << std::endl;

  do{
    std::cout << "move (rock, paper, scissor, quit): " << std::endl;

    /// Récupération du choix humain
    std::cin >> choix;
    if(choix == "quit")
      break;
    /// Réalisation du choix IA
    std::cout << "\n" << std::endl;  
    /// Calcul du résultat de la partie
    result.play(argv[1],choix);

    std::cout << "\n" << std::endl;  
  }while (choix != "quit");
  
  return 0;
}
