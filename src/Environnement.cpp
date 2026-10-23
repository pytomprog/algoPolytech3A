#include "Environnement.hpp"

#include "Robot.hpp"

#include <iostream>
#include <sstream>

Environnement::Environnement() {
    genererCarte();
    genererVictimes();
}

void Environnement::genererCarte() {
    unsigned int longueur = 7, hauteur = 5;
    m_carte = Grille<TypeCase>(longueur, hauteur, TypeCase::LIBRE);
    for (int y = 0; y < hauteur; y++) {
        for (int x = 0; x < longueur; x++) {
            if (x == 0 || x == longueur - 1 || y == 0 || y == hauteur - 1) {
                m_carte.ecrireCase(Vecteur2(x, y), TypeCase::MUR);
            }
        }
    }
    m_carte.ecrireCase(Vecteur2(2, 2), TypeCase::MUR);
    m_carte.ecrireCase(Vecteur2(4, 3), TypeCase::MUR);
}

void Environnement::genererVictimes() {
    m_positionVictimes.push_back(Vecteur2(4, 2));
}

void Environnement::afficherCarte() const {
    // Récupération de la chaine de caractères de la carte 
    std::ostringstream oss;
    m_carte.afficher(oss);
    std::string carteString = oss.str();

    // Ajout des victimes
    for (const auto& positionVictime: m_positionVictimes) {
        carteString[(2*m_carte.getLongueur()+1)*(m_carte.getHauteur()-1-positionVictime.y) + 2*positionVictime.x] = 'V';
    }

    // Ajout du robot
    if (m_robotPtr) {
        Vecteur2 positionRobotRepereFixe = m_robotDecallage + m_robotPtr->getPosition();
        carteString[(2*m_carte.getLongueur()+1)*(m_carte.getHauteur()-1-positionRobotRepereFixe.y) + 2*positionRobotRepereFixe.x] = 'R';
    }
    
    std::cout << carteString;
}

void Environnement::setRobot(Robot* robotPtr, Vecteur2 positionRobotRepereFixe) {
    m_robotPtr = robotPtr;

    m_robotDecallage = positionRobotRepereFixe - m_robotPtr->getPosition();
}