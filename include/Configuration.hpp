#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include <iostream>

enum class TypeCase {
    LIBRE,
    MUR,
    INCONNU
};

std::ostream& operator<<(std::ostream& os, TypeCase type);

#endif //CONFIGURATION_HPP