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

}
