#include "Moto.h"



using namespace std;



Moto::Moto() {

	int poids = 0;

	Moteur* moteur = 0;

}

/**
 * \brief
 *
 * \param
 * \param
 */
Moto::Moto(int poids, Moteur* moteur) {

	this->poids = poids;

	this->moteur = moteur;
	

}

/**
 * \brief Destructeur
 *
 */
Moto::~Moto() {

	cout << "Destrcution de la moto " << endl;

}


int Moto::getPoids() {
	return this->poids;
}
void  Moto::setPoids(int poids) {
	this->poids = poids;
}
/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */


void Moto::setMoteur(Moteur* moteur) {
	this->moteur = moteur;
}
