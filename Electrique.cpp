/*****************************************************************//**
 * \file   Electrique.cpp
 * \brief  description du fichier Electrique.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/

#include "Electrique.h"


using namespace std;



Electrique::Electrique() {

	this->tensionMax = 200;

}

/**
 * .
 * 
 * \param tensionMax
 */
Electrique::Electrique(float tensionMax) {

	this->tensionMax = tensionMax;

}


/**
 * \brief Destructeur
 *
 */
Electrique::~Electrique() {

	cout << "Destrcution du moteur Electrique " << endl;

}
/**
 * .
 * 
 * \return de la tension max
 */

float Electrique::getTensionMax() {
	return this->tensionMax;
}
/**
 * .
 * 
 * \param tensionMax
 */
void  Electrique::setTensionMax(float tensionMax) {
	this->tensionMax = tensionMax;
}


