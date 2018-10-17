/*
 * MatriceDynamique.h
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#ifndef MATRICEDYNAMIQUE_H_
#define MATRICEDYNAMIQUE_H_

#include <iostream>

namespace Operateurs {

class MatriceDynamique {
protected:
	int** memoire;
	int hauteur;
	int largeur;
public:
	MatriceDynamique(int largeur, int hauteur);
	virtual ~MatriceDynamique();
	void memoriser(int x, int y, int valeur);
	void journaliser();
};

} /* namespace MondeMagique */

#endif /* MATRICEDYNAMIQUE_H_ */
