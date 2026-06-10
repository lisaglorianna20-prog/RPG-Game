#ifndef SKILL_H
#define SKILL_H

#include <string>
#include "Monster.h"

using namespace std;

class Skill {
private:
    string name;
    int damage;
    int mpCost;

public:
    Skill(string n, int d, int mp);

    void use(Monster &m);

    void showInfo();

    int getDamage();

    string getName();
};

#endif