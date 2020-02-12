#include "donnees.h"
#include "..\screen\screen.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

Donnees leJeu;

void InitialiserJoueurs();
void Jouer();

int main() 
{
	char fini = 'n';
	srand((unsigned)time(NULL));
	InitialiserJoueurs();
	while (fini=='n' || fini=='N')
	{
		Jouer();
		cout << "\nTermine (n/o) ? ";
		cin >> fini;		
	}
}

void Jouer() 
{
	int nombreCartesAJouer = 0;
	cout << "Combien de cartes doit-on distribuer par joueur? \n";
	cin >> nombreCartesAJouer;
	VerifierNombreCarteADistribuer(nombreCartesAJouer);
	MelangerLesCartesDuPaquet();
	DistribuerCartesAuxJoueurs(nombreCartesAJouer);
	int resultatPremierJoueur = AfficherResultatDunJoueur(leJeu.Joueur1);
	int resultatDeuxiemeJoueur = AfficherResultatDunJoueur(leJeu.Joueur2);
	AttribuerLesVictoires(resultatPremierJoueur, resultatDeuxiemeJoueur);
	

}

void InitialiserJoueurs()
{
	cout << "Bienvenue au jeu! Quel est le nom du premier joueur? \n";
	string nomJoueur = "";
	cin >> nomJoueur;
	leJeu.Joueur1.SetNomJoueur(nomJoueur);
	cout << "Bien! Quel est est le nom du deuxieme joueur? \n";
	cin >> nomJoueur;
	leJeu.Joueur2.SetNomJoueur(nomJoueur);

}

void VerifierNombreCarteADistribuer(int nombreCarteChoisi)
{
	
}

void MelangerLesCartesDuPaquet()
{
	int nombreCartes = 52;
	Carte carteTemporaire;
	int brasse;
	for (brasse = 0; brasse < 500; brasse++)
	{

	}
}

void DistribuerCartesAuxJoueurs(int nombreCarteChoisi)
{
	int cpt = 1;
	int i;
	nombreCarteChoisi = nombreCarteChoisi * 2;
	for (i = 0; i < nombreCarteChoisi; i++)
	{
		if (cpt == 1)
		{
			leJeu.Joueur1.AjouterUneCarte(&leJeu.lesCartes[i]);
			cpt = 2;
		}
		else if (cpt == 2)
		{
			leJeu.Joueur2.AjouterUneCarte(&leJeu.lesCartes[i]);
			cpt = 1;
		}
	}
}

int AfficherResultatDunJoueur(Joueur aJoueur)
{
	int totalDesCartes = 0;
	int indiceTableau = 0;
	cout << aJoueur.getNomJoueur << "\n";
	while (indiceTableau < 52 && aJoueur.GetCarteJoueurTableau(indiceTableau) != NULL)
	{
		cout << aJoueur.GetCarteJoueurTableau(indiceTableau)->GetValeur() << ", " << aJoueur.GetCarteJoueurTableau(indiceTableau)->GetAtout() << "\n";
		totalDesCartes = totalDesCartes + aJoueur.GetCarteJoueurTableau(indiceTableau)->GetValeur();
		indiceTableau++;
	}
	cout << "Le total du joueur nomme "<< aJoueur.getNomJoueur()<< "est de " << totalDesCartes << ". \n";
	return totalDesCartes;
}

void AttribuerLesVictoires(int resultatJoueur1, int resultatJoueur2)
{
	if (resultatJoueur1 == resultatJoueur2)
	{
		/* cas égalité*/
		cout << "C'ette partie est nulle! \n";
	}
	if (resultatJoueur1 < resultatJoueur2)
	{
		/* joueur 2 gagne*/
		cout << "Bravo au joueur " << leJeu.Joueur2.getNomJoueur() << "! \n";
		leJeu.Joueur2.AjouterUneVictoire();
		leJeu.Joueur1.AjouterUneDefaite();
	}
	else
	{
		/* joueur 1 gagne*/
		cout << "Bravo au joueur " << leJeu.Joueur2.getNomJoueur() << "! \n";
		leJeu.Joueur1.AjouterUneVictoire();
		leJeu.Joueur2.AjouterUneDefaite();

	}
}
