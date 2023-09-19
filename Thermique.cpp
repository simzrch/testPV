/*****************************************************************//**
 * \file   Thermique.cpp
 * \brief  description du fichier Thermique.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/
#include "Thermique.h"


using namespace std;


/**
 * \brief description de la classe Thermique
 */
 //La d�finition du constructeur par d�faut ;
Thermique::Thermique() {

	 this->cylindree = 18;

}

/**
 * .
 * 
 * \param cylindree
 */
Thermique::Thermique(float cylindree) {

	this->cylindree = cylindree;






}


/**
 * \brief Destructeur
 *
 */
Thermique::~Thermique() {


	cout << "Destrcution du moteur thermique " << endl;

}




/**
 * 
 *
 * \return du r�sultat cylindre
 */

float Thermique::getCylindree() {
	return this->cylindree;
}
/**
 * .
 * 
 * \param newCylindree
 */
void  Thermique::setcylindree(float newCylindree) {
	this->cylindree = newCylindree;
}



