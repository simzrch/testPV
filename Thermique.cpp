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

<<<<<<< HEAD
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
=======
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


>>>>>>> acd9360c94787d2f4f15d1c1f01c88bd2e493702
