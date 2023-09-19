/*****************************************************************//**
 * \file   Moteur.cpp
 * \brief  description du fichier Moteur.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/
#include "Moteur.h"


using namespace std;


/**
 * \brief description de la classe Moteur
 */
 //La définition du constructeur par défaut ;
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
 * \brief Accesseur de l'attribut puissance
 *
 * \return Nombre de la puissance
 */


int Moteur::getPuissance() {
	return this->puissance;
}
/**
 * .
 * \brief Mutateur de l'attribut puissance
 * \param puissance
 */
void  Moteur::setPuissance(int puissance) {
	this->puissance = puissance;
}


