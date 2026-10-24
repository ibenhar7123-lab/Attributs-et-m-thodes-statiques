// Utilisateur.cpp - definition de la classe Utilisateur
#include "Utilisateur.hpp"

#include <iostream>
#include <utility>

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(std::string nom, std::string role)
    : nom(std::move(nom)), role(std::move(role)) {
    ++nbUtilisateursConnectes;
    std::cout << "[connexion]    " << this->nom << " (" << this->role << ")\n";
}

Utilisateur::Utilisateur(const Utilisateur& autre)
    : nom(autre.nom), role(autre.role) {
    ++nbUtilisateursConnectes;
    std::cout << "[connexion]    " << nom << " (" << role << ") [copie]\n";
}

Utilisateur::~Utilisateur() {
    --nbUtilisateursConnectes;
    std::cout << "[deconnexion]  " << nom << " (" << role << ")\n";
}

void Utilisateur::afficher() const {
    std::cout << "Utilisateur : " << nom << ", role : " << role << "\n";
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}
