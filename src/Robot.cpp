#include "Robot.hpp"

Robot::Robot(Vecteur2 positionInitiale, const Environnement& environnement) : m_environnement(environnement){
    m_position = positionInitiale;
}