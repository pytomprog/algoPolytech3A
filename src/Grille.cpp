#include "Grille.hpp"

#include <iostream>

Grille::Grille(unsigned int longueur, unsigned int hauteur, int valeurParDefaut) {
    m_longueur = longueur;
    m_hauteur = hauteur;
    m_valeurParDefaut = valeurParDefaut;

    m_contenu.resize(m_hauteur);
    for (size_t y = 0; y<m_hauteur; y++){
        m_contenu[y] = std::vector<int>(m_longueur, valeurParDefaut);
    }
}

void Grille::afficher() {
    for (size_t yPlusUn = m_hauteur; yPlusUn > 0; yPlusUn--){
        for (size_t x = 0; x < m_longueur; x++)  {
            std::cout << m_contenu[yPlusUn-1][x] << " ";
        }
        std::cout << std::endl;
    }
}

void Grille::ecrireCase(int x, int y, int nouvelleValeur) {
    if (x > m_longueur-1 || x < 0  || y > m_hauteur-1 || y < 0)
        return;

    m_contenu[y][x] = nouvelleValeur;
}

int Grille::lireCase(int x, int y) {
    if (x > m_longueur-1 || x < 0  || y > m_hauteur-1 || y < 0)
        return m_valeurParDefaut;

    return m_contenu[y][x];
}