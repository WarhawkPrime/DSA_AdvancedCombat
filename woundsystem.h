#ifndef WOUNDSYSTEM_H
#define WOUNDSYSTEM_H

#include <QObject>

#include "Race.h"

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
    //Ausdauer für den Kampf, wird beeinflusst von Adrenalin, Verletzungen, etc...


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

    //je nach Rasse wird der Konstruktor anders gesetzt, dabei geht es nicht um eigenschaften wie mut, sondern
    //rein um die körperlichen Eigenschaften besonders im Bereich Verletztungen etc..


    //Jedes Körperteil hat eine knochen und muskel struktur, welche beschädigt/zerstört werden kann.
    //je nach schwere enstehen schwerwiegende Auswirkungen bis zum totalausfall. Je nach schwere und Art der Verletztung
    //ist die Blutung vernachlässigbar bis hin zu tödlich in wenigen minuten
    //Die Auswirkungen sind je nach Bereich etwas anders
    //Kritische Treffer: Sollen nur bei sehr guten Treffern zustande kommen (evtl prozent von at wert)
    //Haben dann kritische Auswirkungen auf den kämpfer, auch auf lange bis permanente Weise

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
    //Für jede Rasse einen anderen Konstruktor (zumindest für die großen : Mensch, Elf, Zwerg, Ork, Achaz, Goblin )
    Woundsystem();
    Woundsystem(Race race) {

        /* pro case werden die Werte anders belegt
        switch (race) {
        case Race::Elf: break;
        case Race::Mensch: break;

        }
        */
    }

private:
    Head head;
    Chest chest;
    Belly belly;
    Leftarm leftarm;
    Rightarm rightarm;
    Leftleg leftleg;
    Rightleg rightleg;

    int bloodLevel;     //5000 ml, evtl unterschiede bei den Rassen und Geschlecht?, sinkt durch blutungen / abhängig von person/rasse

    int endurance;      //zusammenhang aus Rasse und eigener Person, sinkt durch aktionen, regeneriert langsam bei erholung abhängig von person/rasse
                        //ergibt sich aus berechneter endurance aus der Playable Race, wert muss hierhin übergeben werden! (Fürs erste)

    int shockLevel;     //schocklevel, steigt bei Verletzungen, Angst, schock hat auswirkung auf ini, at/pa, abhängig von person/rasse
                        //geht von 0 - 10, bei 10 komplette Starre (eine Runde aussetzten, evtl Probe zum hinfallen?
                        // bei 5 etwas in die Richtung wie AT/PA-4, INI-4 oder so?

    int fearResistance; //wirkt ähnlich wie Moral, bei zu viel Angst sinkt die zuversicht, wahrscheinlichkeit für Flucht steigt/ abhängig von person/rasse
                        //ergibt sich aus fear = [(MU + MU + In) / 2], kleine Boni für besonders viel fearResistance um die Unterschied zu erhöhen
                        //bei trefferm wird auf diesen Wert gewürfelt, erschwert um (schocklevel ? ), bei misswurf gibt es auswirkungen von leichten zögern
                        //(zb pa-1) bishin zur erzwungenen Flucht

    int adrenalin;      //wirkt gegen den Schock, unabhängig von person/rasse, erhöt sich leicht bei Verletzungen und gleicht den Schock etwas aus ???
                        //wirkt nur eine bestimmte Zeit lang bevor man in eine art loch fällt

};

#endif // WOUNDSYSTEM_H
