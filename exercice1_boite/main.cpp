// main.cpp - test de la classe Boite
#include <iostream>

#include "Boite.hpp"

int main() {
    std::cout << "Au depart : " << Boite::getNombreBoites() << " boite(s)\n";

    Boite b1(2.0, 3.0, 4.0);
    Boite b2(1.0, 1.0, 1.0);
    std::cout << "Apres b1 et b2 : " << Boite::getNombreBoites() << "\n";   // 2

    {
        Boite b3(5.0, 5.0, 5.0);
        Boite b4 = b3;   // copie : compte aussi
        std::cout << "Dans le bloc (b3, b4) : " << Boite::getNombreBoites() << "\n";   // 4
        std::cout << "Volume de b3 : " << b3.volume() << "\n";
    }   // b3 et b4 detruites ici
    std::cout << "Apres le bloc : " << Boite::getNombreBoites() << "\n";   // 2

    Boite* b5 = new Boite(10.0, 2.0, 1.0);   // allocation dynamique
    std::cout << "Apres new : " << Boite::getNombreBoites() << "\n";   // 3
    delete b5;
    std::cout << "Apres delete : " << Boite::getNombreBoites() << "\n";   // 2

    std::cout << "Volume de b1 : " << b1.volume() << "\n";
    return 0;
}
