#ifndef CREATURE_H
#define CREATURE_H

#include "combatant.h"

#include <QObject>

class Creature : public Combatant
{
public:
    Creature() {

    }

    //override aus combatant
    int rollInitiative() override;
    bool rollAttack() override;
    bool rollDefense() override;

    QString getName() override;
private:

};

#endif // CREATURE_H
