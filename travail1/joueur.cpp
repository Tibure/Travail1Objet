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
	int i=0;
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

Carte * Joueur::GetCarteJoueurTableau(int indice)
{
	return mainDuJoueur[indice];
}

const void Joueur::SetNomJoueur(string nomJoueur)
{
	nom = nomJoueur;
}

void Joueur::AjouterUneDefaite()
{
	nombreDefaites++;
}

void Joueur::AjouterUneVictoire()
{
	nombreVictoires++;
}

const int Joueur::getNombreDefaitesJoueur()
{
	return nombreDefaites;
}

const int Joueur::getNombreVictoiresJoueur()
{
	return nombreVictoires;

}

const string Joueur::getNomJoueur()
{
	return nom;
}


