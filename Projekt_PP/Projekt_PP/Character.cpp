#include "Character.h"
Character::Character(string newname, int newAttackBonus, int newArrows, int newMp, int newHealth, int newRange)
{
    this->name = newname;
    this->health = healthMax = newHealth;
    this->mp = mpMax = newMp;
    this->arrows = newArrows;
    this->attackMod = 1;
    this->attackBonus = newAttackBonus;
    this->range = newRange;
}

void Character::display()
{

        cout << name << "  health: " << health << "  arrows: " << arrows << endl;

}
