#ifndef COMBAT_H
#define COMBAT_H

#include "combatsituation.h"
#include "armory.h"
#include "combatant.h"
#include "playablerace.h"
#include "creature.h"

#include "hero.h"
#include "npc.h"

#include <iostream>
#include <vector>

//json
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include <QVector>
#include <QObject>

using namespace std;

class Combat
{
public:
    Combat();


    //erstellt neue Kampfsituation
    void createNewCombatsituation(QString name, QString description);

    //Soll möglich sein wenn man eine neue Kampfsituation frisch erstellt aber auch danach bevor der Kampf beginnt
    //Name als Key, es darf keine 2 gleichen Combatants/Combatsituations geben!
    void addCombatantToCombatsituation(QString combatantname, QString combatsituationName);

    //bekommt Kampfsituation nach Index
    Combatsituation* getCombatsituationByIndex(int index);
    //bekommt kämpfer nach namen aus allen möglichen kämpfern
    Combatant* getCombatantFromAllCombatantsByName(QString name);

    //hilfsmethode um sich die anzahl aller kampfsituationen zu geben
    int getCombatsituationsSize() {return combatsituations.size();}

private:
    //alle kampfsituationen
    QVector<Combatsituation*> combatsituations;
    //alle möglichen kämpfer, ob tier,mensch, held
    QVector<Combatant*> allCombatants;
    //alle helden
    QVector<Hero*> allHeroes;
    //alles menschliche npc
    QVector<Npc*> allNpcs;
    //alle kreaturen
    QVector<Creature*> allCreatures;

    //Armory
    Armory armory;

};

#endif // COMBAT_H
