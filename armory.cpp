#include "armory.h"

Armory::Armory()
{

}

Armor* Armory::getArmorByIndex(int index) {
    return armor.at(index);
}
Weapon* Armory::getWeaponByIndex(int index) {
    return weapons.at(index);
}
