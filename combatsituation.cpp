#include "combatsituation.h"

Combatsituation::Combatsituation() {

}

unsigned int Combatsituation::newRound() {

}

void Combatsituation::addCombatant(Combatant *combatantToAdd) {
    currentCombatants.push_back(combatantToAdd);
}
