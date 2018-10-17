/*
 * Matrice.h
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#ifndef MATRICE_H_
#define MATRICE_H_

#include <iostream>

namespace Operateurs {

class Matrice {
protected :
	int memoire[3][3];
public:
	Matrice();
	Matrice(int);
	virtual ~Matrice();
	void memoriser(int x, int y, int valeur);
	void journaliser();

};

} /* namespace MondeMagique */

#endif /* MATRICE_H_ */
