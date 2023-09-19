/*****************************************************************//**
 * \file   Moto.h
 * \brief  description du fichier Moto.h
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/
#pragma once

#include "Moteur.h"
#include <iostream>
#include <string>

/**
\brief description de la classe Moto
 */

class Moto;

class Moto
{

private:

    int poids;

    Moteur* moteur;


protected:



public:
    /*Classe sous forme canonique*/
    Moto();
    ~Moto();
    /**
     * .
     * 
     * \param poids
     * \param moteur
     */
    Moto(int poids, Moteur* moteur);

    /**
     * .
     * 
     * \param poids grace a cettre methode
     */
    void setPoids(int poids);
    /**
     * .
     * 
     * \return le poids grace a cettre methode
     */
    int getPoids();

    /**
     * .
     * 
     * \param moteur
     */
    void setMoteur(Moteur* moteur);
    /**
     * .
     * 
     * \return le moteur
     */
    Moteur* getMoteur();



};