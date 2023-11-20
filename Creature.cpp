#include "Creature.h"
#include "Heros.h"

Creature::Creature(int pv, int pa) : pv(pv), pa(pa)
{
}


void Creature::afficheC() {
    std::cout << "La vie du heros est de : " << pv << "pv" << std::endl;
    std::cout << "Ses points d'attaque sont  : " << pa << std::endl;

}


void Creature::subitDegat(int degat) {
    pv -= degat;
    if (pv < 0) {
        pv = 0;
    }
}

void Creature::attaquer(Heros& cible) {
    cible.subitDegat(pa);
}