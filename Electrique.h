/*****************************************************************//**
 * \file   Electrique.h
 * \brief  description du fichier Electrique.h
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/
#pragma once

#include "Moteur.h"
#include <iostream>
#include <string>
class Electrique;

class Electrique
{
private:

    float tensionMax;


protected:



public:
    /*Classe sous forme canonique*/
    Electrique();
    ~Electrique();
    Electrique(float tensionMax);


    void setTensionMax(float tensionMax);
    float getTensionMax();

};


