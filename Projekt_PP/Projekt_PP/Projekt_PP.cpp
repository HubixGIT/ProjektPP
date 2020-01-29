#include <iostream>

using namespace std;



#include "Monster.h"
#include "Character.h"
#include "Combat.h"



Character chooseCharacterStats()

{

        string n;
        int range = 1, attackBonus = 2, arrows = 5, health = 100, mp = 10, choice;

        cout << "What is your name?" << endl;
        cin >> n;

        cout << "Your current stats are, attackBonus: " << attackBonus << " arrows: " << arrows << " mp: " << mp;
        cout << " health: " << health << " range: " << range << endl;
        cout << "you have 5 tokens which you can spend on increasing your Character's statistics. You can"
        << "spend 1 for 1 attack-bonus, 3 arrows, 4 mp, or 10 health. You can also spend 2 to get 3 range" << endl;
        cout << "Choose 1 for attack bonus, 2 for arrows, 3 for mp, 4 for health, and 5 for range." << endl;

        for (int tokens = 5; tokens > 0; tokens--)
            
        {
            
                cout << "tokens: " << tokens << endl;
            
                cin >> choice;
            
                switch (choice)
                {
                case 1:
                        attackBonus++;
                        cout << "attackBonus: " << attackBonus << endl;
                        break;
                case 2:
                        arrows += 3;
                        cout << "arrows: " << arrows << endl;
                        break;
                case 3:
                        mp += 4;
                        cout << "mp: " << mp << endl;
                        break;
                case 4:
                        health += 10;
                        cout << "health: " << health << endl;
                        break;
                case 5:
                        if (tokens > 2) 
                        {
                                tokens--;
                                range += 3;
                                cout << "range: " << range << endl;
                            
                        }
                        else
                        {
                                cout << "Not enough tokens!" << endl;
                                tokens++;
   
                        }
                        break;

                default:
                        cout << "Please choose a number from 1 to 5" << endl;
                        break;
   
                }

        }// end for loop

        cout << "Congratulations, you may now set forth into the world, young adventurer." << endl;

        return Character(n, attackBonus, arrows, mp, health, range);

}

Monster goblin("goblin", 50, 2, 1);

int main(int argc, char* const argv[]) {
 
        Character C = chooseCharacterStats();

        Combat combat(goblin);

        combat.combat1(C);

        return 0;
}


