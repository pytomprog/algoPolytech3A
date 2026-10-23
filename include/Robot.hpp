#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "Vecteur2.hpp"
#include "Environnement.hpp"

class Robot {
private:
    Vecteur2 m_position;
    const Environnement& m_environnement;
    
public:
    Robot(const Environnement& environnement);

    const Vecteur2& getPosition() const;
};

#endif //ROBOT_HPP