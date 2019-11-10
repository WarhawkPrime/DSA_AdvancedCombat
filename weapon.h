#ifndef WEAPON_H
#define WEAPON_H

#include <QObject>

class Weapon
{

public:
    Weapon() {}
    Weapon(QString name, unsigned int weaponIntegrity, short unsigned int breakmod) : name{name}, weaponIntegrity{weaponIntegrity}, breakmod{breakmod} {
    }
    virtual ~Weapon() {}

    virtual QString getName() = 0;
protected:


    QString name;
    unsigned int weaponIntegrity;   //"Gesundheit" der Waffe
    short unsigned int breakmod;    //mod für den schaden den eien Waffe bekommen kann
};

#endif // WEAPON_H
