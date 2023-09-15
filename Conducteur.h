/*
 * conducteur.h
 *
 *  Created on: 27 f�vr. 2023
 *      Author: SNIR_adminPV
 */

#ifndef CONDUCTEUR_H_
#define CONDUCTEUR_H_

#include <iostream>
#include "Moto.h"
using namespace std;


//La d�claration de la classe ;
class Conducteur {

private:

	string nom;
	string prenom;
	int anneeNaissance;
	static int nbConducteur;

protected:

public:

	Conducteur();
	Conducteur(const Conducteur &cond);
	Conducteur& operator = (const Conducteur &cond);
	virtual  ~Conducteur();

	string getNom();
	string getPrenom();
	int getAnneNaissance();


	//void afficheMotos();
	//void addMoto(Moto newMoto);
	//void rmMoto(Moto rmMoto);
};

#endif /* BATEAU_H_ */