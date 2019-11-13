#ifndef ARMOR_H
#define ARMOR_H

#include <QObject>

class Armor
{
    enum class ArmorType
    {
        Kopf,
        Brust,
        Bauch,
        Arme,
        Beine,
    };
    struct ArmorValues
    {
        double slashDefense{};
        double thrustDefense{};
        double bluntDefense{};
    };
public:
    Armor() {}
    Armor(QString name, unsigned int armorIntegrity, short unsigned int breakMod, double slashDefense, double thrustDefense, double bluntDefense) :
        name{name}, armorIntegrity{armorIntegrity}, breakMod{breakMod} {

    }
    virtual ~Armor() {}


    virtual ArmorType getArmortype()=0;
    virtual void setArmortype(ArmorType armortype)=0;

    QString getName() const {return name;}
    void setName(QString name) {this->name = name;}

    unsigned int getArmorIntegrity() const {return armorIntegrity;}
    void setArmorIntegrity(unsigned int armorIntegerity) {this->armorIntegrity = armorIntegerity;}

    short unsigned int getBreakmod() const {return breakMod;}
    void setBreakmod(short unsigned int breakmod) {this->breakMod = breakmod;}

    void setSlashDefense(double slashDefense)  {this->armorvalues.slashDefense = slashDefense;}
    double getSlashDefense() const {return armorvalues.slashDefense;}

    void setThrustDefense(double thrustDefense)  {this->armorvalues.thrustDefense = thrustDefense;}
    double getThrustDefense() const {return armorvalues.thrustDefense;}

    void setBluntDefense(double bluntDefense)  {this->armorvalues.bluntDefense = bluntDefense;}
    double getBluntDefense() const {return armorvalues.bluntDefense;}

    virtual void setBackSlashDefense() = 0;
    virtual double getBAckSlashDefense() = 0;

    virtual void setBackThrustDefense() = 0;
    virtual double getBAckThrustDefense() = 0;

    virtual void setBackBluntDefense() = 0;
    virtual double getBAckBluntDefense() = 0;

private:
    ArmorValues armorvalues;
    QString name;
    unsigned int armorIntegrity;    //"Gesundheit" der Rüstung Bei Werten wie 75%,50%,25%,0% auswirkungen
    short unsigned int breakMod;    //faktor von 1-6(10?) um den die Rüstung kaputt gehen kann
};

#endif // ARMOR_H
