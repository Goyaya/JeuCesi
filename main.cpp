#include<iostream>
#include<string>

#include"Creature.h"
#include"Heros.h"


int main()
{
	Heros Y(50, 10);
	Y.afficheH();

	Creature G(20, 5);
	G.afficheC();

	G.attaquer(Y);
	Y.afficheH();

	Y.attaquer(G);
	G.afficheC();



}