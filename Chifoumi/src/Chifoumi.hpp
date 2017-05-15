#ifndef CHIFOUMI_HPP_
#define CHIFOUMI_HPP_
#include "Random.hpp"
#include <string>


class Chifoumi {
private :
  std::string _lastResult;
  std::string _lastAiMove;
  Random _rang;

public :
  void play(std::string playerName, std::string playMove);
  std::string getLastResult();
  std::string getLastAiMove();
};

#endif
