#include <iostream>

#include "Environnement.hpp"
#include "Robot.hpp"

int main() {
    Environnement environnement;
    Robot robot(environnement);
    environnement.setRobot(&robot, Vecteur2(1, 1));
    environnement.afficherCarte();
}