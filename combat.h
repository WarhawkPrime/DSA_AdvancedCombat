#ifndef COMBAT_H
#define COMBAT_H

#include "combatsituation.h"
#include "armory.h"
#include "combatant.h"
#include "playablerace.h"

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
    void createNewCombatsituation(QString name);
    Combatsituation* getCombatsituationByIndex(int index);

    int getCombatsituationsSize() {return combatsituations.size();}

private:
    QVector<Combatsituation*> combatsituations;

    QVector<Npc*> allNpcs;
    Armory armory;

};

#endif // COMBAT_H
