/*****************************************************************//**
 * \file   Thermique.h
 * \brief  description de Thermique.h
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/

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