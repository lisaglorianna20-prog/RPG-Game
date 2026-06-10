#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string n, int h, int atk)
{
    name = n;
    hp = h;
    attackPower = atk;
    gold = 0;
}

void Player::addItem(Item item)
{
    items.push_back(item);
}

void Player::attack(Monster &m)
{
    cout << "\n"
         << name
         << " attacks "
         << m.getName()
         << "!"
         << endl;

    m.takeDamage(attackPower);
}

void Player::takeDamage(int damage)
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

void Player::useItem(int index)
{
    if(index < 0 || index >= items.size())
    {
        cout << "Invalid item!" << endl;
        return;
    }

    if(!items[index].isAvailable())
    {
        cout << "Item out of stock!" << endl;
        return;
    }

    hp += items[index].getEffectValue();

    cout << "\nUsed "
         << items[index].getName()
         << " +" << items[index].getEffectValue()
         << " HP"
         << endl;

    items[index].decreaseQuantity();
}

bool Player::isAlive()
{
    return hp > 0;
}

void Player::showItems()
{
    cout << "\n===== ITEMS =====" << endl;

    for(int i = 0; i < items.size(); i++)
    {
        cout << i + 1 << ". ";
        items[i].showInfo();
    }
}

void Player::showStatus()
{
    cout << "\n===== PLAYER =====" << endl;
    cout << "Name : " << name << endl;
    cout << "HP   : " << hp << endl;
    cout << "ATK  : " << attackPower << endl;
    cout << "Gold : " << gold << endl;
}

void Player::addGold(int amount)
{
    gold += amount;
}

int Player::getHP()
{
    return hp;
}