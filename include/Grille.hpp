#ifndef GRILLE
#define GRILLE

#include <vector>

class Grille {
private:
    int m_longueur;
    int m_hauteur;
    std::vector<std::vector<int>> m_contenu;

public:
    Grille(int longueur, int hauteur);
};

#endif //GRILLE