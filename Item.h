#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
private:
    string name;
    string type;
    int effectValue;
    int quantity;

public:
    Item(string n, string t, int e, int q);

    string getName();
    int getEffectValue();
    int getQuantity();

    void decreaseQuantity();

    bool isAvailable();
    void showInfo();
};

#endif