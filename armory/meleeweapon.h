#ifndef MELEEWEAPON_H
#define MELEEWEAPON_H

#include "weapon.h"

#include <QObject>

class MeleeWeapon : public Weapon
{
    enum class Weapontype {
        Dolch,
        Schwert,
        Hiebwaffe,
        Saebel,
        Zweihandschwert,
        Zweihandhiebwaffe,
        Stab,
        Speer
    };
    enum class Distance {
        H,
        N,
        S,
        P,
        HN,
        NS,
        HNS
    };

public:
    MeleeWeapon(QString name, unsigned int weaponIntegrity, short unsigned int breakmod, Distance distanzklasse,
                short unsigned int slashDamage, short unsigned int thrustDamage, short unsigned int bluntDamage ) :
        Weapon(name, weaponIntegrity, breakmod), distanceClass{distanzklasse}, slashDamage{slashDamage}, thrustDamage{thrustDamage}, bluntDamage{bluntDamage}
    {

    }

   QString getName() override;

private:
   //Distanzklasse!
   Distance distanceClass;
    short unsigned int slashDamage{};
    short unsigned int thrustDamage{};
    short unsigned int bluntDamage{};

};

#endif // MELEEWEAPON_H
