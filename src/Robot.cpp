#include "Robot.hpp"

Robot::Robot(const Environnement& environnement) : m_environnement(environnement){
    m_position = Vecteur2(0, 0);
}

const Vecteur2& Robot::getPosition() const{
    return m_position;
}