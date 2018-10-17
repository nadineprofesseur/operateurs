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
#include "Matrice.h"
#include "MatriceDynamique.h"
using namespace Operateurs;

int main() {

	Date aujourdhui; // instanciation de l'OBJET en C++

	cout << "Date avant ++ : " << aujourdhui.getAnnee() << "-" << aujourdhui.getMois() << "-" << aujourdhui.getJour() << endl;
	++aujourdhui;
	cout << "Date apres ++ : " << aujourdhui.getAnnee() << "-" << aujourdhui.getMois() << "-" << aujourdhui.getJour() << endl;

	Date noel(25,12,2018);
	Date halloween(31,10,2018);

	bool estNoelApres = noel > halloween;
	cout << "Noel est " << ((estNoelApres)?"après":"avant") << " Halloween " << endl;

	Matrice matriceDesUns(1);
	Matrice matriceDesChiffres(2);
	matriceDesChiffres.memoriser(2,2,5);
	matriceDesChiffres.memoriser(1,0,4);
	matriceDesChiffres.memoriser(0,1,9);
	matriceDesUns.journaliser();
	matriceDesChiffres.journaliser();

	Matrice nouvelleMatrice = matriceDesUns + matriceDesChiffres;
	nouvelleMatrice.journaliser();
	delete &nouvelleMatrice; // // ATTENTION !!!! même si pas de new, c'est de la mémoire dynamique (heap) // le new est caché dans le +

	// tableau dynamique et arithmetique des pointeurs
	// int* pointeurInt = new int;
	int* tableauInt = new int[10];
	tableauInt[5] = 4; // *(tableauInt+5) = 4;

	MatriceDynamique quinteMatrice(5,5);

	return 0;
}
