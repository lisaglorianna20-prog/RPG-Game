#include <iostream>
#include "Player.h"
#include "Skill.h"
#include "Monster.h"
#include "Item.h"

using namespace std;

int main()
{
    cout << "========================" << endl;
    cout << "      RPG ADVENTURE     " << endl;
    cout << "========================" << endl;

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    Player hero(name, 120, 20);

    // Items
    hero.addItem(Item("Potion", "Heal", 30, 3));
    hero.addItem(Item("Super Potion", "Heal", 50, 1));

    // Skills
    Skill fireball("Fireball", 35, 10);
    Skill thunder("Thunder", 50, 20);

    // Monster
    Monster goblin("Goblin King", 150, 15, 100);

    cout << "\nA wild " << goblin.getName() << " appears!\n";

    while(hero.isAlive() && goblin.isAlive())
    {
        hero.showStatus();
        goblin.showInfo();

        cout << "\n===== ACTION =====" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Skill" << endl;
        cout << "3. Item" << endl;
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if(choice == 1)
        {
            hero.attack(goblin);
        }
        else if(choice == 2)
        {
            cout << "1. Fireball\n2. Thunder\nChoose skill: ";
            int s;
            cin >> s;

            if(s == 1) fireball.use(goblin);
            else if(s == 2) thunder.use(goblin);
        }
        else if(choice == 3)
        {
            hero.showItems();
            cout << "Choose item: ";

            int i;
            cin >> i;

            hero.useItem(i - 1);
        }

        if(!goblin.isAlive()) break;

        goblin.attack(hero);

        cout << "\n---------------------\n";
    }

    cout << "\n========================" << endl;

    if(hero.isAlive())
    {
        cout << "YOU WIN!" << endl;
        hero.addGold(goblin.getRewardGold());
        cout << "Gold earned: " << goblin.getRewardGold() << endl;
    }
    else
    {
        cout << "GAME OVER!" << endl;
    }

    cout << "========================" << endl;

    return 0;
}