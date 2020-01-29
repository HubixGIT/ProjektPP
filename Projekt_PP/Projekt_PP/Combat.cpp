#include "Combat.h"
#include "Monster.h"
#include "Character.h"

Combat::Combat(Monster & newM) : M(newM)

{

}

void Combat::combatChoice(Character & C)

{

        if (C.health > 0)
  
        {

                C.display();

                cout << "What do you do? 1 attack, 2 fire arrow" << endl;
                short choice;
                cin >> choice;
                switch (choice)
                    
                {
                    
                case 1:
                        C.attack(M);
                        break;
                    
                case 2:
                        C.rangedAttack(M);
                        break;
                }
   
        }

        else
            cout << C.name << " is dead!" << endl;

}

void Combat::combat1(Character & C)

{

        while (M.health > 0 && C.health > 0)
        {
                M.attack(C);
                combatChoice(C);
        }

        if (M.health < 0)
            cout << "Congratulations! You killed the monster!" << endl;

        if (C.health < 0)
            cout << "YOU HAVE DIED! GAME OVER" << endl;
}
