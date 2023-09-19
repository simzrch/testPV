/*****************************************************************//**
 * \file   Conducteur.cpp
 * \brief  description du fichier  Conducteur.cpp
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/


#include <iostream>
#include "Conducteur.h"
#include "Moto.h"
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
/**
 * .
 * 
 * \param ad
 * \param on
 */
Conducteur::Conducteur(std::string ad, std::string on)
{
	cout << "Je suis le consducteur" << endl;
	/**
	 * .
	 * 
	 * \param ad
	 * \param on
	 */
	this->prenom = "ad";
	this->nom = "on";

}

Conducteur::~Conducteur() {
	// TODO Auto-generated destructor stub

	cout << "Je suis le destructeur" << endl;
	nbConducteur--;
}
/**
 * .
 * 
 * \param cond pour conducteur
 */
Conducteur::Conducteur(const Conducteur& cond)
{
	/**
	 * .
	 * 
	 * \param cond pour conducteur
	 */
	cout << "Copie de Conducteur" << endl;
	/**
	 * .
	 * 
	 * \param cond pour conducteur
	 */
	prenom = cond.prenom;
	nom = cond.nom;
	anneeNaissance = cond.anneeNaissance;
	nbConducteur++;
}
/**
 * .
 * 
 * \param cond pour conducteur
 * \return de l'Affectation de conducteur
 */
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
	/**
	 * .
	 * 
	 * \param cond pour conducteur 
	 * \return toute l'affectation
	 */
	return *this;

}
/**
 * .
 * 
 * \return le prénom du conducteur
 */
string Conducteur::getPrenom()
{

	return(this->prenom);
}
/**
 * .
 * 
 * \return le nom du conducteur
 */
string Conducteur::getNom()
{

	return(this->nom);
}
/**
 * .
 * 
 * \return l'annee de naissance du conducteur
 */
int Conducteur::getAnneNaissance()
{

	return(this->anneeNaissance);
}


void  Conducteur::afficheMotos() {

}


/**
 * .
 * 
 * \param newMoto
 */
void Conducteur::addMoto(Moto *newMoto)
{
	this->maMoto = newMoto;

}

/**
 * .
 * 
 * \param rmMoto
 */
void Conducteur::rmMoto() 
{
	this->maMoto = NULL; 

};