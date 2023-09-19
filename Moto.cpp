/*****************************************************************//**
 * \file   Moto.cpp
 * \brief  description du fichier Moto.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/


#include "Moto.h"



using namespace std;


/**
 * \brief description de la classe Moto
 */
 //La d�finition du constructeur par d�faut ;
Moto::Moto() {


	this->poids = 5;
	
	this->moteur = 0;
}

/**
 * .
 * 
 * \param poids
 * \param moteur
 */
Moto::Moto(int poids, Moteur* moteur) {

	this->poids = poids;

	this->moteur = moteur;
	

}

/**
 * \brief c'est le Destructeur
 *
 */
Moto::~Moto() {

	cout << "Destrcution de la moto " << endl;

}

/**
 * .
 * 
 * \return du poids
 */
int Moto::getPoids() {
	return this->poids;
}

/**
 * .
 * 
 * \param poids
 */
void  Moto::setPoids(int poids) {
	this->poids = poids;
}
/**
 * .
 * 
 * \param moteur
 */


void Moto::setMoteur(Moteur* moteur) {
	this->moteur = moteur;
}
