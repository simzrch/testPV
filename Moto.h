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
    Moto(int poids, Moteur* moteur);


    void setPoids(int poids);
    int getPoids();

    void setMoteur(Moteur* moteur);
    Moteur* getMoteur();



};