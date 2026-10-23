#include "Configuration.hpp"

std::ostream& operator<<(std::ostream& os, TypeCase type) {
    switch (type) {
    case TypeCase::LIBRE:
        return os << '.';
    case TypeCase::MUR:
        return os << '#';
    case TypeCase::INCONNU:
        return os << 'i';
    default:
        return os;
    };
}