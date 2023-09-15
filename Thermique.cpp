#include "Thermique.h"


using namespace std;



Thermique::Thermique() {

	float cylindree = 0;

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

	cout << "Destrcution du moteur Electrique " << endl;

}
/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */

float Thermique::getCylindree() {
	return this->cylindree;
}
void  Thermique::setcylindree(float newCylindree) {
	this->cylindree = newCylindree;
}


