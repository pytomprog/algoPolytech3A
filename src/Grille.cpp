#include "Grille.hpp"

Grille::Grille(int longueur, int hauteur) {
    m_longueur = longueur;
    m_hauteur = hauteur;

    m_contenu.resize(m_hauteur);
    for (size_t y = 0; y<m_hauteur; y++){
        m_contenu[y] = std::vector<int>(m_longueur, 0);
    }
}