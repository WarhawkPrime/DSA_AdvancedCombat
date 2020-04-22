#ifndef OBSERVER_H
#define OBSERVER_H

/*
 *Vorgehen: Ein Observer beobachtet alle Kämpfer der Kampfsituation (alle hinzugefügten
 * Combatants melden den Observer an)
 * Wenn sich am Status eines Combatants etwas verändert, dann meldet der Kämpfer diese
 * Veränderung and den Observer
 *
 * Wirklich notwendig? es ist immer genau bekannt wann genau sich etwas bei einem
 * Combatant ändert.
 *
 */



class Observer
{
public:
    Observer();
    virtual ~Observer() {}

    virtual void update() = 0;
};

#endif // OBSERVER_H
