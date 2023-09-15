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
	
	float cylindree ;

protected:
 
public:

	string getCylindree();

	void setcylindree(float newCylindree);


	//void afficheMotos();
	//void addMoto(Moto newMoto);
	//void rmMoto(Moto rmMoto);
};

#endif