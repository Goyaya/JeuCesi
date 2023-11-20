#include "Heros.h"



Heros::Heros(int pv, int pa) : pv(pv), pa(pa)
{
}


void Heros::afficheH() {
    std::cout << "La vie du heros est de : " << pv << "pv" << std::endl;
    std::cout << "Ses points d'attaque sont  : " << pa << std::endl;
    }

void Heros::attaquer(Creature& e) {
    e.subitDegat(pa);
}

void Heros::subitDegat(int degat) {
    pv -= degat;
    if (pv < 0) {
        pv = 0;
    }
}