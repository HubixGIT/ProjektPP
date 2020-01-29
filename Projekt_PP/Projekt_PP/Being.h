#ifndef Being_h
#define Being_h

#include <iostream>

using namespace std;

class Being                                

{public:
        string name;
        int attackBonus;
        int range;
        float attackMod;
        int health;
        int healthMax;
        int mp;
        int mpMax;
        int arrows;

        void attack(Being & target);
        void rangedAttack(Being & target);
        void heal();
};
#endif


