// Produit.hpp - declaration de la classe Produit
#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <string>

class Produit {
private:
    std::string nom;
    float prixHT;

    static float tauxTVA;   // en pourcentage, partage par tous les produits

public:
    Produit(std::string nom, float prixHT);

    const std::string& getNom() const;
    float getPrixHT() const;
    float getPrixTTC() const;   // utilise uniquement l'attribut statique pour le taux

    static void modifierTVA(float nouveauTaux);
    static float getTauxTVA();
};

#endif
