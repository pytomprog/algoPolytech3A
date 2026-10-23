#ifndef VECTEUR2_HPP
#define VECTEUR2_HPP

struct Vecteur2 {
    int x;
    int y;

    Vecteur2 operator+(const Vecteur2& autreVecteur) const {
        return Vecteur2(x + autreVecteur.x, y + autreVecteur.y);
    }

    Vecteur2 operator-(const Vecteur2& autreVecteur) const {
        return Vecteur2(x - autreVecteur.x, y - autreVecteur.y);
    }
};

#endif //VECTEUR2_HPP