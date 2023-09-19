/*
 * Bateau.cpp
 *
 *  Created on: 27 févr. 2023
 *      Author: SNIR_admin
 */
#include <iostream>
#include "Conducteur.h"
#include <string>
using namespace std;



//La définition du constructeur par défaut ;
Conducteur::Conducteur() {
	// TODO Auto-generated constructor stub
	cout << "Creation d’un conducteur par defaut " << endl;
	this->prenom = "john";
	this->nom = "the ripper ";
	this->anneeNaissance = 1994;

}
/////////////////////////////////////////////////////////////////////////////////////
Conducteur::Conducteur(std::string ad, std::string on)
{
	cout << "Je suis le consducteur" << endl;
	this->prenom = "ad";
	this->nom = "on";

}

Conducteur::~Conducteur() {
	// TODO Auto-generated destructor stub
	cout << "Je suis le destructeur" << endl;
	nbConducteur--;
}
Conducteur::Conducteur(const Conducteur& cond)
{
	cout << "Copie de Conducteur" << endl;
	prenom = cond.prenom;
	nom = cond.nom;
	anneeNaissance = cond.anneeNaissance;
	nbConducteur++;
}

Conducteur& Conducteur::operator = (const Conducteur& cond)
{
	cout << "Affectation de conducteur" << endl;
	if (this != &cond)
	{
		prenom = cond.prenom;
		nom = cond.nom;
		anneeNaissance = cond.anneeNaissance;
		nbConducteur++;
	}
	return *this;

}


















/*int Conducteur::getPrenom()
{

	return(this->prenom);
}*/