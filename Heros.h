#pragma once
#include <iostream>
#include <string>
#include "Creature.h"


class Heros {
private:
    int pv;
    int pa;
   ;

public:
    Heros(int pv, int pa);
    void afficheH();
    void attaquer(Creature& e);
    void subitDegat(int degat);

};