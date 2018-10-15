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

	Date noel(25,12,2018);
	Date halloween(31,10,2018);

	bool estNoelApres = noel > halloween;
	cout << "Noel est " << ((estNoelApres)?"après":"avant") << " Halloween ";

	return 0;
}
