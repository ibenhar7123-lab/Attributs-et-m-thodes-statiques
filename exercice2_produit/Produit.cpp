// Produit.cpp - definition de la classe Produit
#include "Produit.hpp"

#include <utility>

float Produit::tauxTVA = 20.0f;   // taux initial : 20 %

Produit::Produit(std::string nom, float prixHT)
    : nom(std::move(nom)), prixHT(prixHT) {}

const std::string& Produit::getNom() const {
    return nom;
}

float Produit::getPrixHT() const {
    return prixHT;
}

float Produit::getPrixTTC() const {
    return prixHT * (1.0f + tauxTVA / 100.0f);
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}

float Produit::getTauxTVA() {
    return tauxTVA;
}
