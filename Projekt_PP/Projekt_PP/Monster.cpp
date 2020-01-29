#include "Monster.h"
Monster::Monster(string newname, int newHealth, int newAttackBonus, int NewRange)
{
       this->name = newname;
       this->health = newHealth;
       this->attackBonus = newAttackBonus;
       this->range = NewRange;
       this->attackMod = 1;
       this->arrows = 10;
}