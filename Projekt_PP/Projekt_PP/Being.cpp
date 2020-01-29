#include "Being.h"
#include "Being.h"

void Being::attack(Being & target)
{
        int damage = (int)(attackMod * (((rand() % 100) * (range + 1) / 100) + attackBonus));

        target.health -= damage;

        cout << name << " attacks " << target.name << " doing " << damage << " damage!" << endl;
        cout << target.name << "'s health: " << target.health << endl;
}

void Being::rangedAttack(Being& target)
{
        if (arrows > 0)        {
                arrows--;

                int damage = rand() % 8;

                if (damage == 0)
                    cout << name << " misses " << target.name;
                else
                {

                        if (damage == 7)
                            damage = 15;

                        damage *= attackMod;
 
                        target.health -= damage;
                        cout << name << " shoots " << target.name << " doing " << damage << " damage!" << endl;
                        cout << target.name << "'s health: " << target.health << endl;
                }
        }
        else
            cout << name << " is out of arrows!" << endl;
}

void Being::heal()
{
        health = healthMax;
        mp = mpMax;
}
