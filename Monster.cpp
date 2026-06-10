#include "Monster.h"
#include "Player.h"
#include <iostream>

using namespace std;

Monster::Monster(string n, int h, int atk, int gold)
{
    name = n;
    hp = h;
    attackPower = atk;
    rewardGold = gold;
}

void Monster::attack(Player &p)
{
    cout << "\n"
         << name
         << " attacks!"
         << endl;

    p.takeDamage(attackPower);
}

void Monster::takeDamage(int damage)
{
    hp -= damage;

    if(hp < 0)
        hp = 0;

    cout << name
         << " receives "
         << damage
         << " damage!"
         << endl;
}

bool Monster::isAlive()
{
    return hp > 0;
}

void Monster::showInfo()
{
    cout << "\n===== MONSTER =====" << endl;
    cout << "Name : " << name << endl;
    cout << "HP   : " << hp << endl;
    cout << "ATK  : " << attackPower << endl;
}

string Monster::getName()
{
    return name;
}

int Monster::getAttackPower()
{
    return attackPower;
}

int Monster::getRewardGold()
{
    return rewardGold;
}

int Monster::getHP()
{
    return hp;
}