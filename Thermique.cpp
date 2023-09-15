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

	cout << "Destrcution du moteur thermique " << endl;

}
/**
 * \brief Accesseur de l'attribut moteur Thermique
 *
 * \return Nom de moteur Thermique
 */

float Thermique::getcylindree() {
	return this->cylindree;
}
void  Thermique::setcylindree(float cylindree) {
	this->cylindree = cylindree;
}
