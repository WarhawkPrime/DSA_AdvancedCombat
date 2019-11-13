#ifndef WOUNDSYSTEM_H
#define WOUNDSYSTEM_H

#include <QObject>

//schock, angst, adrenalin???

class Woundsystem
{
    /*
     * //gehört in das Wundensystem
Blut: Max von 5000 ml Blut im Körper
      Klasse 1 Hemorrhage: Bis zu 15% (750ml) Blutverlust. Keine Vitale Veränderung, keine Transfusion notwendig
      Klasse 2 Hemorrhage: Von 15% bis 30% (1500ml) Blutverlust. Auswirkungen merkbar (schlechter sehen, erhöter Herzschlag, bleich und kälter), keine Transfusion notwendig
      Klasse 3 Hemorrhage: Von 30% bis 40% (2000ml) Blutverlust. fallender Blutdruck, Schock, mentaler zustand verschlimmert. Fusion meistens notwendig
      Klasse 4 Hemorrhage: Über 40% Blutverlust (2000ml). Aggressive Wiederbelebungsmaßnahmen notwendig.

      Blutungsstufen:
      Grade 0: No Bleeding:
      Grade 1: Petechiale Blutung: 100% (5000ml) in 24H (Vernachlässigbar)
      Grade 2: leichte Blutung: 50% (2500ml) in 3H
      Grad 3: Schwere Blutung: >150ml pro Minute: benötigt Transfusion
      Grad 4: Schwächende Blutung: benötigt sofortige Transfusion von Plasma und Thrombozyten. Tod Wahrscheinlich
    *
    */

    //versch. Blutungen für die Rasse?
    //größe beeinflusst treffer (bei Kreaturen)


    enum class Hemorrhage {
        Hemorrhage_Klasse_0,
        Hemorrhage_Klasse_1,
        Hemorrhage_Klasse_2,
        Hemorrhage_Klasse_3,
        Hemorrhage_Klasse_4
    };
    enum class HemorrhageLevel {
        Blutung_Stufe_0,
        Blutung_Stufe_1,
        Blutung_Stufe_3,
        Blutung_Stufe_4
    };

    struct Head {
        int bonestructure;
        int musclestructure;

        int brain;
        int throat;
        int eyes;
        int nose;
        int ears;

        int shockMod;
    };
    struct Chest {
        int bonestructure;
        int musclestructure;

        int heart;
        int lung;
        int ribs;
        int collarbone;

        int shockMod;
    };
    struct Belly {
        int bonestructure;
        int musclestructure;

        int intestines;
        int stomach;
        int liver;
        int kidney;

        int shockMod;
    };
    struct Leftarm {
        int bonestructure;
        int musclestructure;

        int fingers;
        int hand;
        int elbow;
        int shoulder;
        int artery;

        int shockMod;
    };
    struct Rightarm {
        int bonestructure;
        int musclestructure;

        int fingers;
        int hand;
        int elbow;
        int shoulder;
        int artery;

        int shockMod;
    };
    struct Leftleg {
        int bonestructure;
        int musclestructure;

        int foot;
        int knee;
        int artery;
        int hip;

        int shockMod;
    };
    struct Rightleg {
        int bonestructure;
        int musclestructure;

        int foot;
        int knee;
        int artery;
        int hip;

        int shockMod;
    };

public:
    Woundsystem();
private:
    const unsigned int MAXBLOOD = 5000;


    Head head;
    Chest chest;
    Belly belly;
    Leftarm leftarm;
    Rightarm rightarm;
    Leftleg leftleg;
    Rightleg rightleg;
};

#endif // WOUNDSYSTEM_H
