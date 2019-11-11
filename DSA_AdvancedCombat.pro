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
    armor.cpp \
    armor.cpp \
    armorwithbackdefense.cpp \
    armorwithoutbackdefense.cpp \
    armory.cpp \
    calculator.cpp \
    combat.cpp \
    combatant.cpp \
    combatsituation.cpp \
    creature.cpp \
    hero.cpp \
    hero.cpp \
    main.cpp \
    mainwindow.cpp \
    meleeweapon.cpp \
    newcombatsitdialog.cpp \
    npc.cpp \
    npc.cpp \
    playablerace.cpp \
    playablerace.cpp \
    rangeweapon.cpp \
    rangeweapon.cpp \
    weapon.cpp \
    woundsystem.cpp \
    woundsystem.cpp

HEADERS += \
    armor.h \
    armorwithbackdefense.h \
    armorwithbackdefense.h \
    armorwithoutbackdefense.h \
    armory.h \
    armory.h \
    calculator.h \
    calculator.h \
    combat.h \
    combatant.h \
    combatant.h \
    combatsituation.h \
    creature.h \
    hero.h \
    hero.h \
    mainwindow.h \
    meleeweapon.h \
    meleeweapon.h \
    newcombatsitdialog.h \
    npc.h \
    npc.h \
    playablerace.h \
    playablerace.h \
    rangeweapon.h \
    rangeweapon.h \
    weapon.h \
    woundsystem.h

FORMS += \
    mainwindow.ui \
    newcombatsitdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    classes.qmodel
