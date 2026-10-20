#ifndef GRILLE
#define GRILLE

#include <vector>

class Grille {
private:
    unsigned int m_longueur;
    unsigned int m_hauteur;
    int m_valeurParDefaut;
    std::vector<std::vector<int>> m_contenu;

public:
    Grille(unsigned int longueur, unsigned int hauteur, int valeurParDefaut);
    
    void afficher();
    void ecrireCase(int x, int y, int nouvelleValeur);
    int lireCase(int x, int y);
};

#endif //GRILLE