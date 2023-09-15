/*
 * Thermique.h
 *
 *  Created on: 27 févr. 2023
 *      Author: SNIR_admin
 */

#ifndef THERMIQUE_H_
#define THERMIQUE_H_

#include <iostream>
#include "Moteur.h"
using namespace std;


//La déclaration de la classe ;
class Therminque {

private:
	
	string nom;
	string prenom;
	int anneeNaissance;
		

protected:
 
public:

	string getNom();

	string getPrenom();
	int getAnneNaissance();


	//void afficheMotos();
	//void addMoto(Moto newMoto);
	//void rmMoto(Moto rmMoto);
};

#endif /* BATEAU_H_ */



//les declaration se font generalement dans les ".h"
