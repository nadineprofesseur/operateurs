/*
 * Date.cpp
 *
 *  Created on: 15 oct. 2018
 *      Author: stamandnadine
 */

#include "Date.h"

namespace Operateurs {

Date::Date() {

	this->annee = 2018;
	this->mois = 10;
	this->jour = 15;

}

Date::~Date() {
}

// TODO : programmer normaliser()
void Date::normaliser()
{
}

void Date::operator++()
{
	this->jour++;
	this->normaliser();
}

Date::Date(int jour, int mois, int annee)
{
	this->jour = jour;
	this->mois = mois;
	this->annee = annee;
}

bool Date::operator>(Date& autre)
{
	if(this->annee > autre.annee) return true;
	if(this->annee < autre.annee) return false;
	if(this->mois > autre.mois) return true;
	if(this->mois < autre.mois) return false;
	if(this->jour > autre.jour) return true;
	return false;
}


}
