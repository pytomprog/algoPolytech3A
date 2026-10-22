#ifndef GRILLE_HPP
#define GRILLE_HPP

#include <concepts>
#include <iostream>
#include <vector>

template <typename T>
concept Affichable = requires(std::ostream& os, T& t) {
    os << t;
};

template <Affichable T>
class Grille {
private:
    unsigned int m_longueur;
    unsigned int m_hauteur;
    T m_valeurParDefaut;
    std::vector<std::vector<T>> m_contenu;

public:
    Grille();
    Grille(unsigned int longueur, unsigned int hauteur, T valeurParDefaut);
    
    void afficher() const;
    void ecrireCase(int x, int y, T nouvelleValeur);
    T lireCase(int x, int y) const;
};

#include "Grille.tpp"

#endif //GRILLE_HPP