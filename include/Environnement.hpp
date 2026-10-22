#ifndef ENVIRONNEMENT_HPP
#define ENVIRONNEMENT_HPP

#include "Configuration.hpp"
#include "Grille.hpp"

class Environnement {
private:
    Grille<TypeCase> m_carte;

    void genererCarte();
public:
    Environnement();
    void afficherCarte() const;
};

#endif //ENVIRONNEMENT_HPP