#ifndef COMBATSITUATION_H
#define COMBATSITUATION_H

#include "combatant.h"

//json
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include <QVector>
#include <QObject>

class Combatsituation
{
public:
    Combatsituation();
    Combatsituation(QString name);
    unsigned int newRound();    //methode die für jede Runde neu aufgerufen wird, gibt einen int Wert als Rundenzähler zurück

    QString getName() const {return name;}

private:
    QString name;   //zur Identifikation
    QVector<Combatant*> currentCombatants;  //Heroes dürfen/sollen verändert werden, npcs nicht!!!
    //evtl mal teams einstellen (später)
};

#endif // COMBATSITUATION_H
