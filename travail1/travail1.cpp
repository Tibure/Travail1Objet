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
	cout << "Combien de cartes doit-on distribuer? \n";
	cin >> nombreCartesAJouer;
	VerifierNombreCarteADistribuer(nombreCartesAJouer);
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
