// uml_poo.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Conducteur.h"
#include "Moto.h"
#include "Moteur.h"
#include "Electrique.h"
#include "Thermique.h"
using namespace std;

int main()
{


    cout << "la course c'est dangereux" << endl;

    Conducteur* volant = new Conducteur();
    cout << "le conducteur conduis bien" << endl;

    Moto* pot = new Moto();
    cout << "la moto est bien lourde" << endl;

    Moteur* gazoil = new Moteur(20);
    cout << "la moteur pese son poids avec en tout: " << gazoil->getPuissance() << "kg" << endl;

    Electrique* batterie = new Electrique(500);
    cout << "la tension maximum du moteur electrique est de: " << batterie->getTensionMax() << "Volt" << endl;


}
