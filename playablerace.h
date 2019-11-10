#ifndef PLAYABLERACE_H
#define PLAYABLERACE_H

#include "combatant.h"

#include "woundsystem.h"

#include "armory.h"

class PlayableRace : public Combatant
{
    struct HeadArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct ChestArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct BellyArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct LeftArmAmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct RightArmArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct LeftLegArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct RightLegArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
    struct BackArmor {
        double CombinedSlashDefense{};
        double CombinedThrustDefense{};
        double CombinedBluntDefense{};
    };
public:
    PlayableRace();
    virtual ~PlayableRace() override {}

    virtual QString getName() override=0;
protected:
    //Race race factory                 fällt evtl raus?
    //Woundsystem woundsystem;
    QVector<Armor*> ownArmor;
    QVector<Weapon*> ownWeapons;
    //Attribute vom Hedlendokument die auch von NPCS zum Kampf gebraucht werden
    short unsigned int mu;
    short unsigned int kk;
    short unsigned int ko;
    short unsigned int ff;
    short unsigned int ge;
    short unsigned int kl;
    short unsigned int in;
    //Werte für den KAmpf, berechnet von den Attributen, Methoden dazu!
    short unsigned int baseIni;
    short unsigned int at;
    short unsigned int pa;
    short unsigned int fk;
};

#endif // PLAYABLERACE_H
