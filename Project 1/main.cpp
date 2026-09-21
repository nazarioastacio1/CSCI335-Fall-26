#include "Guild.hpp"
#include <iostream>

int main(){

   Player p1("Jonathan");
   Player p2("Juan");

   Guild g1;
   g1.enlistPlayer(p1);
   g1.enlistPlayer(p2);

   std::cout << "Player enlisted" << std::endl;

   return 0;
}