/*
 * MatriceDynamique.cpp
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#include "MatriceDynamique.h"

namespace Operateurs {

MatriceDynamique::MatriceDynamique(int largeur, int hauteur) {
	this->largeur = largeur;
	this->hauteur = hauteur;
	this->memoire = new int*[hauteur];
	for(int rangee = 0; rangee < hauteur; rangee++)
	{
		this->memoire[rangee] = new int[largeur];
	}
}

MatriceDynamique::~MatriceDynamique() {
	for(int rangee = 0; rangee < hauteur; rangee++)
	{
		delete [] this->memoire[rangee];
	}
	delete [] this->memoire;
}

} /* namespace MondeMagique */
