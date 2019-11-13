#include "combat.h"

Combat::Combat()
{

}

void Combat::createNewCombatsituation(QString name) {
    Combatsituation* newCombatsituation = new Combatsituation(name);
    combatsituations.push_back(newCombatsituation);
}

Combatsituation* Combat::getCombatsituationByIndex(int index) {
    return combatsituations.at(index);
}

Combatant* Combat::getCombatantFromAllCombatantsByName(QString name) {
    for(unsigned int i{0}; i < allCombatants.size(); i++) {
        if(allCombatants.at(i)->getName() == name) {
            return allCombatants.at(i);
        }
    }
}

void Combat::addCombatantToCombatsituation(QString combatantname, QString combatsituationName) {
    for(unsigned int i{0}; i < combatsituations.size(); i++) {
        if(combatsituations.at(i)->getName() == combatsituationName) {
            combatsituations.at(i)->addCombatant(getCombatantFromAllCombatantsByName(combatantname));
        }
    }
}
