#include "Environnement.hpp"

Environnement::Environnement() {
    genererCarte();
}

void Environnement::genererCarte() {
    unsigned int longueur = 7, hauteur = 5;
    m_carte = Grille<TypeCase>(longueur, hauteur, TypeCase::LIBRE);
    for (int y = 0; y < hauteur; y++) {
        for (int x = 0; x < longueur; x++) {
            if (x == 0 || x == longueur - 1 || y == 0 || y == hauteur - 1) {
                m_carte.ecrireCase(x, y, TypeCase::MUR);
            }
        }
    }
    m_carte.ecrireCase(2, 2, TypeCase::MUR);
    m_carte.ecrireCase(4, 3, TypeCase::MUR);
}

void Environnement::afficherCarte() const {
    m_carte.afficher();
}