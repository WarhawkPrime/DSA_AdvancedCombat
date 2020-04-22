#ifndef HERO_H
#define HERO_H

#include "playablerace.h"
#include "engine/woundsystem.h"

#include <QObject>

class Hero : public PlayableRace
{
public:
    Hero() {}
    QString getName() {return name;}
private:
};

#endif // HERO_H
