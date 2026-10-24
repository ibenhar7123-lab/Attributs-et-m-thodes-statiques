// Boite.cpp - definition de la classe Boite
#include "Boite.hpp"

#include <iostream>

int Boite::nbBoites = 0;   // definition de l'attribut statique

Boite::Boite(double longueur, double largeur, double hauteur)
    : longueur(longueur), largeur(largeur), hauteur(hauteur) {
    ++nbBoites;
}

// Le constructeur de copie genere par le compilateur n'incrementerait PAS le compteur,
// alors que le destructeur, lui, le decrementerait : le compteur deviendrait faux.
Boite::Boite(const Boite& autre)
    : longueur(autre.longueur), largeur(autre.largeur), hauteur(autre.hauteur) {
    ++nbBoites;
}

Boite::~Boite() {
    --nbBoites;
}

double Boite::volume() const {
    return longueur * largeur * hauteur;
}

int Boite::getNombreBoites() {
    return nbBoites;
}
