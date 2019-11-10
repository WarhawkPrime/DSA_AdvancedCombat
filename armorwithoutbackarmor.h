#ifndef ARMORWITHOUTBACKDEFENSE_H
#define ARMORWITHOUTBACKDEFENSE_H

#include "armor.h"

#include <QObject>

class ArmorWithoutBackDefense : public Armor
{
    enum class ArmorType
    {
        Kopf,
        Arme,
        Beine,
    };
public:
    ArmorWithoutBackDefense
        (ArmorType armortype, QString name, unsigned int armorIntegrity, double slashDefense, double thrustDefense, double bluntDefense, short unsigned int breakmod ) :
            Armor(name, armorIntegrity, breakmod, slashDefense, thrustDefense, bluntDefense)
        {
            setSlashDefense(slashDefense);
            setThrustDefense(thrustDefense);
            setBluntDefense(bluntDefense);
            setBreakmod(breakmod);
            armorIntegrity = 100;   //Am Anfang wird die Rüstung mit 100% erstellt
        }


    ArmorType getArmortype() const {return armortype;}
    void setArmortype(ArmorType armortype) {this->armortype = armortype;}

private:
    ArmorType armortype;
};

#endif // ARMORWITHOUTBACKDEFENSE_H
