#ifndef Character_h
#define Character_h
#include "Being.h"
#include <iostream>

using namespace std;

class Character : public Being

{

public:
  
        Character(string, int, int, int, int, int);
        void display();

};

#endif


