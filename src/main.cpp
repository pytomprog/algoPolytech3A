#include <iostream>

#include "Environnement.hpp"
#include "Robot.hpp"

int main() {
    Environnement environnement;
    Robot robot(Vecteur2(0, 0), environnement);
    environnement.afficherCarte();
}