/*****************************************************************//**
 * \file   main.cpp
 * \brief  description du main
 * 
 * \author SNIR_admin
 * \date   September 2023
 *********************************************************************/

#include <iostream>
#include "Conducteur.h"
#include "Moto.h"
#include "Moteur.h"
#include "Electrique.h"
#include "Thermique.h"

using namespace std;

int main()
{

    
    
    cout << "la course cest dangereux" << endl;


    //creation d'un objet volant qui return la méthode getPrenom() et getNom() qui viennent des fichier Conducteur
    Conducteur* volant = new Conducteur();
    cout << "le conducteur conduis bien et s'appel :" << volant->getPrenom() << " " << volant->getNom() << endl;

   //creation d'un objet pot qui return la méthode getPoids() des fichier Moto
    Moto* pot = new Moto();
    cout << "la moto est bien lourde" << pot->getPoids() << endl;
   
    //creation d'un objet cylindre qui return la méthode getCylindree() des fichier Thermique
    Thermique* cylindre = new Thermique();
    cout << "la cylindree est : " << cylindre->getCylindree() << " L/tr" << endl;
   
    //creation d'un objet gazoil qui return la méthode getPuissance()  des fichier Moteur
    Moteur* gazoil = new Moteur(20);
    cout << "la moteur pese son poids avec en tout: " << gazoil->getPuissance() << "kg" << endl;
    
    //creation d'un objet batterie qui return la méthode getTensionMax() des fichier Thermique
    Electrique* batterie = new Electrique(500);
    cout << "la tension maximum du moteur electrique est de: " << batterie->getTensionMax() << " Volt" << endl;


}
