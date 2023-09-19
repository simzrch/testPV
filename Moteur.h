/*****************************************************************//**
 * \file   Moteur.h
 * \brief  description du fichier Moteur.h
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/

#pragma once

#include "Electrique.h"
#include "Thermique.h"
#include <iostream>
#include <string>
class Moteur;
/**
 * \brief description de la classe Moteur
 */
class Moteur
{
private:

    int puissance;


protected:



public:
    /*Classe sous forme canonique*/
    Moteur();
    ~Moteur();
    /**
     * .
     * 
     * \param puissance
     */
    Moteur(int puissance);

    /**
     * .
     * 
     * \param puissance
     */
    void setPuissance(int puissance);
    /**
     * .
     * 
     * \return la puissance grace a cette methode
     */
    int getPuissance();

};

