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
