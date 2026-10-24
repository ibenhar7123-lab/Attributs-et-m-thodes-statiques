// main.cpp - simulation de sessions utilisateurs
#include <iostream>

#include "Utilisateur.hpp"

static void afficherNb() {
    std::cout << "  -> Utilisateurs connectes : "
              << Utilisateur::getNbUtilisateursConnectes() << "\n\n";
}

int main() {
    std::cout << "=== Connexions ===\n";
    afficherNb();   // 0 (appel statique sans objet)

    Utilisateur u1("Amine", "admin");
    afficherNb();   // 1

    Utilisateur* u2 = new Utilisateur("Sara", "visiteur");
    afficherNb();   // 2

    Utilisateur* u3 = new Utilisateur("Youssef", "visiteur");
    afficherNb();   // 3

    {
        Utilisateur u4("Salma", "admin");   // session limitee a ce bloc
        afficherNb();   // 4
        std::cout << "=== Fin du bloc : deconnexion automatique de Salma ===\n";
    }
    afficherNb();   // 3

    std::cout << "=== Deconnexions ===\n";
    delete u2;
    afficherNb();   // 2

    delete u3;
    afficherNb();   // 1

    std::cout << "=== Fin du programme : u1 sera detruit automatiquement ===\n";
    return 0;
}
