#ifndef ARMORY_H
#define ARMORY_H

#include "armor.h"
#include "weapon.h"

#include <QVector>
#include <QObject>

class Armory
{
public:
    Armory();
    Armor* getArmorByIndex(int index);
    Weapon* getWeaponByIndex(int index);
private:
    QVector<Armor*> armor;
    QVector<Weapon*> weapons;
};

#endif // ARMORY_H
