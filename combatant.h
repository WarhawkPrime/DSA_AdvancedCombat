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

    virtual QString getName() = 0;
protected:
    QString name;
};

#endif // COMBATANT_H
