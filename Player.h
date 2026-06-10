#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Item.h"
#include "Monster.h"

using namespace std;

class Player {
private:
    string name;
    int hp;
    int attackPower;
    vector<Item> items;
    int gold;

public:
    Player(string n, int h, int atk);

    void addItem(Item item);

    void attack(Monster &m);

    void takeDamage(int damage);

    void useItem(int index);

    bool isAlive();

    void showItems();

    void showStatus();

    void addGold(int amount);

    int getHP();
};

#endif