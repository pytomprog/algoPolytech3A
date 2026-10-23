#ifndef ENVIRONNEMENT_HPP
#define ENVIRONNEMENT_HPP

#include "Configuration.hpp"
#include "Grille.hpp"

#include <vector>

class Robot;

class Environnement {
private:
    Grille<TypeCase> m_carte;
    std::vector<Vecteur2> m_positionVictimes;
    Robot* m_robot;

    void genererCarte();
    void genererVictimes();
public:
    Environnement();
    void afficherCarte() const;
    void setRobot(Robot* robot);
};

#endif //ENVIRONNEMENT_HPP