// Utilisateur.hpp - declaration de la classe Utilisateur
#ifndef UTILISATEUR_HPP
#define UTILISATEUR_HPP

#include <string>

class Utilisateur {
private:
    std::string nom;
    std::string role;   // "admin", "visiteur", ...

    static int nbUtilisateursConnectes;   // prive : accessible seulement via la methode statique

public:
    Utilisateur(std::string nom, std::string role);
    Utilisateur(const Utilisateur& autre);   // une copie = une session de plus
    ~Utilisateur();

    void afficher() const;

    static int getNbUtilisateursConnectes();
};

#endif
