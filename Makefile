CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic -g

all: exercice1_boite/boite exercice2_produit/produit exercice3_utilisateur/utilisateur

exercice1_boite/boite: exercice1_boite/main.cpp exercice1_boite/Boite.cpp exercice1_boite/Boite.hpp
	$(CXX) $(CXXFLAGS) exercice1_boite/main.cpp exercice1_boite/Boite.cpp -o $@

exercice2_produit/produit: exercice2_produit/main.cpp exercice2_produit/Produit.cpp exercice2_produit/Produit.hpp
	$(CXX) $(CXXFLAGS) exercice2_produit/main.cpp exercice2_produit/Produit.cpp -o $@

exercice3_utilisateur/utilisateur: exercice3_utilisateur/main.cpp exercice3_utilisateur/Utilisateur.cpp exercice3_utilisateur/Utilisateur.hpp
	$(CXX) $(CXXFLAGS) exercice3_utilisateur/main.cpp exercice3_utilisateur/Utilisateur.cpp -o $@

run1: exercice1_boite/boite
	./exercice1_boite/boite
run2: exercice2_produit/produit
	./exercice2_produit/produit
run3: exercice3_utilisateur/utilisateur
	./exercice3_utilisateur/utilisateur

clean:
	rm -f exercice1_boite/boite exercice2_produit/produit exercice3_utilisateur/utilisateur
