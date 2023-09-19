

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
    Moteur(int puissance);


    void setPuissance(int puissance);
    int getPuissance();

};

