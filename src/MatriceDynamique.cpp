/*
 * MatriceDynamique.cpp
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#include "MatriceDynamique.h"
using namespace std;

namespace Operateurs {

MatriceDynamique::MatriceDynamique(int largeur, int hauteur) {
	this->largeur = largeur;
	this->hauteur = hauteur;
	this->memoire = new int*[hauteur];
	for(int rangee = 0; rangee < hauteur; rangee++)
	{
		this->memoire[rangee] = new int[largeur];
		for(int colonne = 0; colonne < hauteur; colonne++)
		{
			this->memoire[rangee][colonne] = 0;
		}
	}

}

MatriceDynamique::~MatriceDynamique() {
	for(int rangee = 0; rangee < hauteur; rangee++)
	{
		delete [] this->memoire[rangee];
	}
	delete [] this->memoire;
}

void MatriceDynamique::memoriser(int x, int y, int valeur)
{
	//if(!(x < this->largeur && x >= 0 && y < this->hauteur && y >= 0)) return;
	if(x >= this->largeur || x < 0 || y >= this->hauteur || y < 0) return; // Morgan

	this->memoire[x][y] = valeur;
}
void MatriceDynamique::journaliser()
{
	for(int rangee = 0; rangee < 3; rangee++)
	{
		for(int colonne = 0; colonne < 3; colonne++)
		{
			cout << this->memoire[rangee][colonne] << " ";
		}
		cout << endl;
	}
}
} /* namespace MondeMagique */
