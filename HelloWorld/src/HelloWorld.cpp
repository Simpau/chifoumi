<<<<<<< HEAD
/*!
 * \file HelloWorld.cpp
 * \brief just un Hello world
 * \author Ludovic Menard
 * \version 0.1
 */
=======
#include <glog/logging.h>
>>>>>>> 9ef139d35e580baa0316bb14a3a995d097f47487
#include <iostream>

int main(){
      /*!
     *  \brief Main HelloWorld
     *
     *  main qui affiche Hello World !! dans la console
     *
     */
  std::cout<<"Hello World !!"<<std::endl;

  LOG(info) << "test" ;
  return 0;
}
