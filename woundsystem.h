#ifndef WOUNDSYSTEM_H
#define WOUNDSYSTEM_H

#include <QObject>

//schock, angst, adrenalin???

class Woundsystem
{
    enum class Hemorrhage {
        Klasse_0,
        Klasse_1,
        Klasse_2,
        Klasse_3,
        Klasse_4
    };
    enum class HemorrhageLevel {
        Grade_0,
        Grade_1,
        Grade_3,
        Grade_4
    };
    struct Head {
        int bonestructure;
        int musclestructure;

        int brain;
        int throat;
        int eyes;
        int nose;
        int ears;
    };
    struct Chest {
        int bonestructure;
        int musclestructure;

        int heart;
        int lung;
        int ribs;
        int collarbone;
    };
    struct Belly {
        int bonestructure;
        int musclestructure;

        int intestines;
        int stomach;
        int liver;
        int kidney;
    };
    struct Leftarm {
        int bonestructure;
        int musclestructure;

        int fingers;
        int hand;
        int elbow;
        int shoulder;
        int artery;
    };
    struct Rightarm {
        int bonestructure;
        int musclestructure;

        int fingers;
        int hand;
        int elbow;
        int shoulder;
        int artery;
    };
    struct Leftleg {
        int bonestructure;
        int musclestructure;

        int foot;
        int knee;
        int artery;
        int hip;
    };
    struct Rightleg {
        int bonestructure;
        int musclestructure;

        int foot;
        int knee;
        int artery;
        int hip;
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
