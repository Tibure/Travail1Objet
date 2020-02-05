#pragma once
#include "carte.h"
#include "joueur.h"

const int maxCartes = 52;

class Donnees
{
public:
	Donnees();
	Joueur Joueur1;
	Joueur Joueur2;
	void creerTableauCarte();
	Carte lesCartes[52];
};

