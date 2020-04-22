QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gui/addcombatantdialog.cpp \
    gui/addnewnpcdialog.cpp \
    armory/armor.cpp \
    armory/armorwithbackdefense.cpp \
    armory/armorwithoutbackdefense.cpp \
    armory/armory.cpp \
    engine/calculator.cpp \
    engine/combat.cpp \
    combatant/combatant.cpp \
    engine/combatsituation.cpp \
    combatant/creature.cpp \
    combatant/hero.cpp \
    main.cpp \
    gui/maincombatwidget.cpp \
    gui/mainwindow.cpp \
    armory/meleeweapon.cpp \
    gui/newcombatsitdialog.cpp \
    combatant/npc.cpp \
    engine/observer.cpp \
    combatant/playablerace.cpp \
    armory/rangeweapon.cpp \
    armory/weapon.cpp \
    engine/woundsystem.cpp

HEADERS += \
    combatant/Race.h \
    gui/addcombatantdialog.h \
    gui/addnewnpcdialog.h \
    armory/armor.h \
    armory/armorwithbackdefense.h \
    armory/armorwithoutbackdefense.h \
    armory/armory.h \
    engine/calculator.h \
    engine/combat.h \
    combatant/combatant.h \
    engine/combatsituation.h \
    combatant/creature.h \
    combatant/hero.h \
    gui/maincombatwidget.h \
    gui/mainwindow.h \
    armory/meleeweapon.h \
    gui/newcombatsitdialog.h \
    combatant/npc.h \
    engine/observer.h \
    combatant/playablerace.h \
    armory/rangeweapon.h \
    armory/weapon.h \
    engine/woundsystem.h

FORMS += \
    gui/addcombatantdialog.ui \
    gui/addnewnpcdialog.ui \
    gui/maincombatwidget.ui \
    gui/mainwindow.ui \
    gui/newcombatsitdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Notes \
    classes.qmodel

RESOURCES += \
    resource.qrc
