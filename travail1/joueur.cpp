#include "joueur.h"

//
#include <conio.h>

Joueur::Joueur()
{
	nom = "";
	nombreVictoires = 0;
	nombreDefaites = 0;
	for (int i = 0; i < maxCartesAJouer; i++)
	{
		mainDuJoueur[i] = NULL;
	}
}

void Joueur::EnleverToutesLesCartes()
{
	for (int i = 0; i < maxCartesAJouer; i++)
	{
		mainDuJoueur[i] = NULL;
	}
}

void Joueur::AjouterUneCarte(Carte* cartePigee)
{
	bool trouve = false;
	int i;
	while (trouve == false)
	{
		if (mainDuJoueur[i] == NULL)
		{
			mainDuJoueur[i] = cartePigee;
			trouve = true;
		}
		i++;
	}
}

void Joueur::SetNomJoueur(string nomJoueur)
{
	nom = nomJoueur;
}

