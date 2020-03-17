#ifndef COMBATSITUATION_H
#define COMBATSITUATION_H

#include "combatant.h"

//json
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include <QVector>
#include <QObject>

//!Beschreibung
//! Innerhalb einer Combatsituation wird eine Kampfsituation geregelt. Dazu gehören die beteiligten Kämpfer, die aktuelle Runde,
//! die einzelnen Würfelphasen und aktionen innerhalb einer Runde, etc..



class Combatsituation
{
public:
    Combatsituation();
    Combatsituation(QString name, QString description) : name{name}, description{description} {
        roundCounter = 0;
    }

    unsigned int newRound();    //methode die für jede Runde neu aufgerufen wird, gibt einen int Wert als Rundenzähler zurück

    //Soll möglich sein wenn man eine neue Kampfsituation frisch erstellt aber auch danach bevor der Kampf beginnt
    //Name als Key, es darf keine 2 gleichen Combatants geben
    void addCombatant(Combatant* combatantToAdd);


    QString getName() const {return name;}

    QString getDescription() const {return description;}
    void setDescription(QString description) {this->description = description;}

private:
    //jede Kampfsituation besitzt einen Rundenzähler. Fängt bei 1 an, wird pro Runde um 1 erhöt, kann extern abgefragt werden, getter/setter!
    unsigned int roundCounter;
    QString name;   //zur Identifikation
    QString description;
    QVector<Combatant*> currentCombatants;  //Heroes dürfen/sollen verändert werden, npcs nicht!!!
    //evtl mal teams einstellen (später)

};

#endif // COMBATSITUATION_H
