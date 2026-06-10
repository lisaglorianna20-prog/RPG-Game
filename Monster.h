#ifndef MONSTER_H
#define MONSTER_H

#include <string>

using namespace std;

class Player;

class Monster {
private:
    string name;
    int hp;
    int attackPower;
    int rewardGold;

public:
    Monster(string n, int h, int atk, int gold);

    void attack(Player &p);

    void takeDamage(int damage);

    bool isAlive();

    void showInfo();

    string getName();

    int getAttackPower();

    int getRewardGold();

    int getHP();
};

#endif