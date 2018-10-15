//============================================================================
// Name        : Operateurs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Date.h"
using namespace Operateurs;

int main() {

	Date aujourdhui; // instanciation de l'OBJET en C++

	cout << "Date avant ++ : " << aujourdhui.getAnnee() << "-" << aujourdhui.getMois() << "-" << aujourdhui.getJour() << endl;
	++aujourdhui;
	cout << "Date apres ++ : " << aujourdhui.getAnnee() << "-" << aujourdhui.getMois() << "-" << aujourdhui.getJour() << endl;

	return 0;
}
