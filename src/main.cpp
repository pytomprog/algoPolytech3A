#include <iostream>

#include "Grille.hpp"

int main() {
    Grille maGrille(7, 5, 0);
    maGrille.ecrireCase(2, 1, 1);
    maGrille.afficher();
    int valeurCase1 = maGrille.lireCase(0, 0);
    int valeurCase2 = maGrille.lireCase(2, 1);
    std::cout << "Case 1 : " << valeurCase1 << ", case 2 : " << valeurCase2 << std::endl;
}