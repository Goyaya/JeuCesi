#pragma once
#include <iostream>

class Heros; 

class Creature {
private:
    int pv;
    int pa;


public:
    Creature(int pv, int pa);
    void afficheC();
    void attaquer(Heros &h);
    void subitDegat(int degat);
};