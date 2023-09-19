#include "Thermique.h"


using namespace std;



Thermique::Thermique() {

	 this->cylindree = 18;

}

/**
 * \brief
 *
 * \param
 * \param
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
 * \brief Accesseur de l'attribut moteur Thermique
 *
 * \return Nom de moteur Thermique
 */






/**
 * \brief Accesseur de l'attribut 
 *
 * \return Nom de 
 */

float Thermique::getCylindree() {
	return this->cylindree;
}
void  Thermique::setcylindree(float newCylindree) {
	this->cylindree = newCylindree;
}



