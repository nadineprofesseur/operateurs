/*
 * MatriceDynamique.h
 *
 *  Created on: 17 oct. 2018
 *      Author: stamandnadine
 */

#ifndef MATRICEDYNAMIQUE_H_
#define MATRICEDYNAMIQUE_H_

namespace MondeMagique {

class MatriceDynamique {
protected:
	int** memoire;
public:
	MatriceDynamique(int largeur, int hauteur);
	virtual ~MatriceDynamique();
};

} /* namespace MondeMagique */

#endif /* MATRICEDYNAMIQUE_H_ */
