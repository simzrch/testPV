<<<<<<< HEAD
=======
#pragma once

#include "Electrique.h"
#include "Thermique.h"
#include <iostream>
#include <string>
class Moteur;

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
>>>>>>> bd882ef8c414808b3cdad1069784685b048a1ecb
