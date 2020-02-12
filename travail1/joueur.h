#include <string>
#include "carte.h"
using namespace std;

#ifndef JoueurH
#define JoueurH

const int maxCartesAJouer = 26;
class Joueur
{
private:
	string nom;
	int nombreVictoires;
	int nombreDefaites;
	Carte* mainDuJoueur[26];
public:
	Joueur();
	void EnleverToutesLesCartes();
	void AjouterUneCarte(Carte*);
	const void SetNomJoueur(string);
	Carte * GetCarteJoueurTableau(int);
	const string getNomJoueur();
	const int getNombreDefaitesJoueur();
	const int getNombreVictoiresJoueur();
	void AjouterUneDefaite();
	void AjouterUneVictoire();



};
#endif