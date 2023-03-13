//Collaborated with Zach Shinnick A1851035 and Maxwell Bruce A1766106
#include "Monkey.h"

using namespace std;

Monkey::Monkey() {  
  moveName = "Monkey";
  result["Ninja"] = 1;
  result["Robot"] = 1;
}

int Monkey::getResult(std::string opponent) {  
  return result[opponent];
}

string Monkey::getName() {  
  return moveName;
}