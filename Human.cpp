#include <iostream>
#include "Human.h"

 char Human::makeMove( ) {
    char move;
    std::cin >> move;
    return move;

 }

 std::string Human::getName( ) {
    std::string name;
    std::cin >> name;
    return name;
 }
