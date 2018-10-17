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
	cout << "Noel est " << ((estNoelApres)?"apr�s":"avant") << " Halloween " << endl;

	Matrice matriceDesUns(1);
	Matrice matriceDesChiffres(2);
	matriceDesChiffres.memoriser(2,2,5);
	matriceDesChiffres.memoriser(1,0,4);
	matriceDesChiffres.memoriser(0,1,9);
	matriceDesUns.journaliser();
	matriceDesChiffres.journaliser();

	Matrice nouvelleMatrice = matriceDesUns + matriceDesChiffres;
	nouvelleMatrice.journaliser();
	delete &nouvelleMatrice; // // ATTENTION !!!! m�me si pas de new, c'est de la m�moire dynamique (heap) // le new est cach� dans le +

	// tableau dynamique et arithmetique des pointeurs
	// int* pointeurInt = new int;
	int* tableauInt = new int[10];
	tableauInt[5] = 4; // *(tableauInt+5) = 4;

	MatriceDynamique quinteMatrice(5,5);
	quinteMatrice.memoriser(2,2,11);
	quinteMatrice.journaliser();
	cout << endl;
	MatriceDynamique matriceDesCinq(5,5);
	matriceDesCinq.memoriser(1,1,3);
	matriceDesCinq.journaliser();
	cout << endl;
	MatriceDynamique matriceFinale = quinteMatrice + matriceDesCinq;
	matriceFinale.journaliser();

	return 0;
}
