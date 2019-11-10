#include "combat.h"
#include <QString>

Combat::Combat()
{

}

void Combat::createNewCombatsituation(QString name) {
    Combatsituation* combatsituation = new Combatsituation(name);
    combatsituations.push_back(combatsituation);
}

Combatsituation* Combat::getCombatsituationByIndex(int index) {
    return combatsituations.at(index);
}
