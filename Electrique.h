
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
    Electrique(int tensionMax);


    void setTensionMax(float tensionMax);
    float getTensionMax();

};


