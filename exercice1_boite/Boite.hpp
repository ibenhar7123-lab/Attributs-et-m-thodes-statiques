// Boite.hpp - declaration de la classe Boite
#ifndef BOITE_HPP
#define BOITE_HPP

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;

    static int nbBoites;   // nombre de boites ACTUELLEMENT vivantes

public:
    Boite(double longueur, double largeur, double hauteur);
    Boite(const Boite& autre);   // indispensable : sinon une copie ne serait pas comptee
    ~Boite();

    double volume() const;

    static int getNombreBoites();
};

#endif
