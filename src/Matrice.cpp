/*
 * Matrice.cpp
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#include "Matrice.h"
using namespace std;

namespace Operateurs {

Matrice::Matrice() {
	for(int rangee = 0; rangee < 3; rangee++)
	{
		for(int colonne = 0; colonne < 3; colonne++)
		{
			this->memoire[rangee][colonne] = 0;
		}
	}
}

Matrice::Matrice(int valeur)
{
	for(int rangee = 0; rangee < 3; rangee++)
	{
		for(int colonne = 0; colonne < 3; colonne++)
		{
			this->memoire[rangee][colonne] = valeur;
		}
	}
}

Matrice::~Matrice() {
}

void Matrice::memoriser(int x, int y, int valeur)
{
	this->memoire[x][y] = valeur;
}
void Matrice::journaliser()
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

Matrice& Matrice::operator+(Matrice& autre)
{
	Matrice* nouvelle = new Matrice();

	for(int rangee = 0; rangee < 3; rangee++)
	{
		for(int colonne = 0; colonne < 3; colonne++)
		{
			nouvelle->memoire[rangee][colonne] = this->memoire[rangee][colonne] + autre.memoire[rangee][colonne];
		}
	}

	return (*nouvelle); // R�f�rencer le pointeur pour avoir l'objet, le type r�f�rence est comme le type normal en syntaxe
}


} /* namespace MondeMagique */
