/*
 * Date.h
 *
 *  Created on: 15 oct. 2018
 *      Author: stamandnadine
 */

#ifndef DATE_H_
#define DATE_H_

namespace Operateurs {

class Date {
protected:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int jour, int mois, int annee);
	virtual ~Date();
	void normaliser();
	void operator++();
	bool operator>(Date& autre); // type reference

	int getAnnee() const {
		return annee;
	}

	void setAnnee(int annee) {
		this->annee = annee;
	}

	int getJour() const {
		return jour;
	}

	void setJour(int jour) {
		this->jour = jour;
	}

	int getMois() const {
		return mois;
	}

	void setMois(int mois) {
		this->mois = mois;
	}
};

}

#endif /* DATE_H_ */
