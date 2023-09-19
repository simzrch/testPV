/*****************************************************************//**
 * \file   Electrique.cpp
 * \brief  description du fichier Electrique.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/

#include "Electrique.h"


using namespace std;


/**
 * \brief description de la classe Electrique
 */
 //La définition du constructeur par défaut ;
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
 * \brief c'est le Destructeur
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


