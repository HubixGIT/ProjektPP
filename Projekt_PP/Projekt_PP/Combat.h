#ifndef Combat_h
#define Combat_h

#include <iostream>
using namespace std;
#include "Character.h"
#include "Monster.h"

class Combat
{
public:
        Monster & M;

        Combat(Monster&);

        void combatChoice(Character & C);

        void combat1(Character & C);

};
#endif


