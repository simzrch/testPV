#include "Moteur.h"


using namespace std;


/**
 * \brief description de la classe M%oteur
 */
Moteur::Moteur() {

	this->puissance = 0;

}

/**
 * .
 * 
 * \param puissance
 */
Moteur::Moteur(int puissance) {

	this->puissance = puissance;

	



}


/**
 * \brief Destructeur
 *
 */
Moteur::~Moteur() {

	cout << "Destrcution du moteur " << endl;

}
/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */


int Moteur::getPuissance() {
	return this->puissance;
}
void  Moteur::setPuissance(int puissance) {
	this->puissance = puissance;
}


