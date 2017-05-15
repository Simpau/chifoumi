#include "chifoumi.hpp"
#include <iostream>
#include <random>

Chifoumi::choixRandom() {
  String move[2];
  move[0]="pierre";
  move[1]="feuille";
  move[2]="ciseaux";

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,2):
    int i=dis(gen);

  return move[i];  
}
