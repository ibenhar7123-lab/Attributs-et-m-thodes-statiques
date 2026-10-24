// main.cpp - test de la classe Produit
#include <iomanip>
#include <iostream>

#include "Produit.hpp"

static void afficherPrix(const Produit& p) {
    std::cout << std::left << std::setw(12) << p.getNom()
              << " HT = " << std::fixed << std::setprecision(2) << std::setw(8) << p.getPrixHT()
              << " TTC = " << p.getPrixTTC() << "\n";
}

int main() {
    Produit p1("Cahier", 10.0f);
    Produit p2("Stylo", 2.5f);
    Produit p3("Calculatrice", 150.0f);

    std::cout << "Taux de TVA : " << Produit::getTauxTVA() << " %\n";
    afficherPrix(p1);
    afficherPrix(p2);
    afficherPrix(p3);

    Produit::modifierTVA(10.0f);   // un seul appel, valable pour TOUS les produits

    std::cout << "\nTaux de TVA : " << Produit::getTauxTVA() << " %\n";
    afficherPrix(p1);
    afficherPrix(p2);
    afficherPrix(p3);

    return 0;
}
