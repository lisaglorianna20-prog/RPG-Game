#include "Skill.h"
#include <iostream>

using namespace std;

Skill::Skill(string n, int d, int mp)
{
    name = n;
    damage = d;
    mpCost = mp;
}

void Skill::use(Monster &m)
{
    cout << "\nUsing " << name << "!" << endl;
    m.takeDamage(damage);
}

void Skill::showInfo()
{
    cout << name
         << " | Damage: "
         << damage
         << " | MP Cost: "
         << mpCost
         << endl;
}

int Skill::getDamage()
{
    return damage;
}

string Skill::getName()
{
    return name;
}