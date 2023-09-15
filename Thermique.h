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

class Therminque;
//La déclaration de la classe ;
class Thermique {

private:
	
	float cylindree ;

protected:
 
public:

	
	
	Thermique();
	~Thermique();
	Thermique(float cylindree);


	float getCylindree();
	void setcylindree(float newCylindree);




	//void afficheMotos();
	//void addMoto(Moto newMoto);
	//void rmMoto(Moto rmMoto);
};

#endif