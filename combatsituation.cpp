#include "combatsituation.h"

void Combatsituation::addCombatant(Combatant* combatantToAdd) {
    currentCombatants.push_back(combatantToAdd);
}
