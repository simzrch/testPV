/*****************************************************************//**
 * \file   Conducteur.h
 * \brief  description du fichier Conducteur.h 
 * 
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/
#ifndef CONDUCTEUR_H_
#define CONDUCTEUR_H_



#include <iostream>
#include "Moto.h"
using namespace std;


/**
 * \brief description de la classe Conducteur
 */
class Conducteur {

private:

	string nom;
	string prenom;
	int anneeNaissance;
	int nbConducteur;
	Moto  *maMoto;

protected:

public:

	Conducteur();
	/**
	 * .
	 * 
	 * \param cond
	 */
	Conducteur(const Conducteur &cond);
	/**
	 * .
	 * 
	 * \param cond
	 * \return toutes les donnes de l'afectation
	 */
	Conducteur& operator = (const Conducteur &cond);
	/**
	 * .
	 * 
	 * \param ad
	 * \param on
	 */
	Conducteur(std::string ad, std::string on);
	/**
	 * .
	 * \brief c'est le desctructeur
	 */
	virtual  ~Conducteur();

	/**
	 * .
	 * 
	 * \return le nom
	 */
	string getNom();
	/**
	 * .
	 * 
	 * \return le prenom
	 */
	string getPrenom();
	/**
	 * .
	 * 
	 * \return l'annee de naissance
	 */
	int getAnneNaissance();


	void afficheMotos();
	/**
	 * .
	 * 
	 * \param newMoto
	 */
	void addMoto(Moto *newMoto);
	/**
	 * .
	 * 
	 * \param rmMoto
	 */
	void rmMoto();

};

#endif 

