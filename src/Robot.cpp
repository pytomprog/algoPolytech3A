#include "Robot.hpp"

#include <sstream>
#include <string>

Robot::Robot(const Environnement& environnement) : m_environnement(environnement){
    m_position = Vecteur2(10, 10);
    unsigned int longueur = 21, hauteur = 21;
    m_carteConnaissance = Grille<TypeCase>(longueur, hauteur, TypeCase::INCONNU);
}

const Vecteur2& Robot::getPosition() const{
    return m_position;
}

void Robot::afficherCarteConnaissance() const {
     // Récupération de la chaine de caractères de la carte de connaissance
    std::ostringstream oss;
    m_carteConnaissance.afficher(oss);
    std::string carteString = oss.str();
    
    // Ajout du robot
    carteString[(2*m_carteConnaissance.getLongueur()+1)*(m_carteConnaissance.getHauteur()-1-m_position.y) + 2*m_position.x] = 'R';
    
    std::cout << carteString;
}   