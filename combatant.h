#ifndef COMBATANT_H
#define COMBATANT_H

//json
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

#include <QVector>
#include <QObject>

class Combatant
{
public:
    Combatant();
    virtual ~Combatant() {}

    //Methoden zum Auswürfeln der Initiative, Angreifen, Verteidigen. Sind zwischen playableraces und Creatures unterschiedlich

    //gibt den initiativenWert direkt zurück (nutzt den Calculator)
    virtual int rollInitiative() = 0;
    //bool Werte um zu bestimmen ob überhaupt getroffen wird. Evtl parameter um erscwhwernisse etc zu machen oder den Wert zu übergeben
    //der unterWürfelt werden muss?
    virtual bool rollAttack() = 0;
    virtual bool rollDefense() = 0;



    virtual QString getName() = 0;
protected:
    QString name;
};

#endif // COMBATANT_H
