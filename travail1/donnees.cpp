#include "donnees.h"
#include <conio.h>


Donnees::Donnees()
{
	creerTableauCarte();
}
void Donnees::creerTableauCarte()
{
	int cpt = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 14; j++)
		{
			Carte nouvelleCarte;
			if (i == 0)
			{
				nouvelleCarte.InitialiserCarte(j, "pique");
				lesCartes[cpt] = nouvelleCarte;
			}
			if (i == 1)
			{
				nouvelleCarte.InitialiserCarte(j, "trefle");
				lesCartes[cpt] = nouvelleCarte;
			}
			if (i == 2)
			{
				nouvelleCarte.InitialiserCarte(j, "coeur");
				lesCartes[cpt] = nouvelleCarte;
			}
			if (i == 3)
			{
				nouvelleCarte.InitialiserCarte(j, "carreau");
				lesCartes[cpt] = nouvelleCarte;
			}
		}
	}
}



