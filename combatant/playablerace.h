#ifndef PLAYABLERACE_H
#define PLAYABLERACE_H

#include "combatant.h"

#include "Race.h"
#include "engine/woundsystem.h"

#include "armory/armory.h"

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

    PlayableRace(Race race) {
        //woundsystem wird rasse übergeben
        Woundsystem woundsystem(race);
    }

    virtual ~PlayableRace() override {}

    //override aus combatant
    int rollInitiative() override;
    bool rollAttack() override;
    bool rollDefense() override;


    virtual QString getName() override=0;
protected:
    //Rassen haben andere Werte im Wundensystem -> Rasse wird im Konstruktor von PlayableRace angegeben und im Konstruktor dann dem
    //Woundsystem übergeben, dort wird dann bestimmt welcher Werte Satz genommen wird
    Race race;



    //Attribute vom Heldendokument die auch von NPCS zum Kampf gebraucht werden
    short unsigned int mu;
    short unsigned int kk;
    short unsigned int ko;
    short unsigned int ff;
    short unsigned int ge;
    short unsigned int kl;
    short unsigned int in;

    //Werte für den Kampf, berechnet von den Attributen, Methoden dazu!
    short unsigned int baseIni;
    short unsigned int at;
    short unsigned int pa;
    short unsigned int fk;

    //Ausrüstung
    QVector<Armor*> ownArmor;
    QVector<Weapon*> ownWeapons;

    HeadArmor headArmor;
    ChestArmor chestArmor;
    BellyArmor bellyArmor;
    LeftArmAmor leftarmArmor;
    RightArmArmor rightarmArmor;
    LeftLegArmor leftlegArmor;
    RightLegArmor rightlegArmor;

};

#endif // PLAYABLERACE_H
