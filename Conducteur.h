/*
 * conducteur.h
 *
 *  Created on: 27 févr. 2023
 *      Author: SNIR_adminPV
 */

#ifndef CONDUCTEUR_H_
#define CONDUCTEUR_H_

#include <iostream>
#include "Moto.h"
using namespace std;


//La déclaration de la classe ;
class Conducteur {

private:

	string nom;
	string prenom;
	int anneeNaissance;
	int nbConducteur;
	string  newMoto;

protected:

public:

	Conducteur();
	Conducteur(const Conducteur &cond);
	Conducteur& operator = (const Conducteur &cond);
	Conducteur(std::string ad, std::string on);
	virtual  ~Conducteur();

	string getNom();
	string getPrenom();
	int getAnneNaissance();


	void afficheMotos();
	void addMoto(Moto newMoto);
	void rmMoto(Moto rmMoto);
};

#endif 

