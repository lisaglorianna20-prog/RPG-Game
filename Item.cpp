#include "Item.h"
#include <iostream>

using namespace std;

Item::Item(string n, string t, int e, int q)
{
    name = n;
    type = t;
    effectValue = e;
    quantity = q;
}

string Item::getName()
{
    return name;
}

int Item::getEffectValue()
{
    return effectValue;
}

int Item::getQuantity()
{
    return quantity;
}

void Item::decreaseQuantity()
{
    if(quantity > 0)
        quantity--;
}

bool Item::isAvailable()
{
    return quantity > 0;
}

void Item::showInfo()
{
    cout << name
         << " | Effect: "
         << effectValue
         << " | Qty: "
         << quantity
         << endl;
}