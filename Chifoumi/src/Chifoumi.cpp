#include "Chifoumi.hpp"
#include "Random.hpp"
#include <iostream>

void Chifoumi::play(std::string playerName, std::string playerMove){  
  int ia = _rang(3);
  std::string move[] = {"rock", "paper", "scissor"};
  std::string result[] = {"win", "loss", "draw"};
  
  if(playerMove == move[ia])
    std::cout << result[2] << " IA -> " << move[ia] << std::endl;
  else if(playerMove == move[(ia+1)%3])
    std::cout << playerName << " " << result[0] << " IA -> " << move[ia] << std::endl;
  else
    std::cout << playerName << " " << result[1] << " IA -> " << move[ia] << std::endl;
}

std::string Chifoumi::getLastResult(){
  return _lastResult;
}

std::string Chifoumi::getLastAiMove(){
  return _lastAiMove;
}
