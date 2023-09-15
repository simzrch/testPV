#include "Electrique.h"


using namespace std;



Electrique::Electrique() {

	int tensionMax = 0;

}

/**
 * \brief
 *
 * \param
 * \param
 */
Electrique::Electrique(int tensionMax) {

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
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */

float Electrique::getTensionMax() {
	return this->tensionMax;
}
void  Electrique::setTensionMax(float tensionMax) {
	this->tensionMax = tensionMax;
}


