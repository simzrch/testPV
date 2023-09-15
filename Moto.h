
#pragma once

#include "Moteur.h"
#include <iostream>
#include <string>
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