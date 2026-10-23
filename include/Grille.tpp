template <Affichable T>
Grille<T>::Grille() {}

template <Affichable T>
Grille<T>::Grille(unsigned int longueur, unsigned int hauteur, T valeurParDefaut) {
    m_longueur = longueur;
    m_hauteur = hauteur;
    m_valeurParDefaut = valeurParDefaut;

    m_contenu.resize(m_hauteur);
    for (size_t y = 0; y<m_hauteur; y++){
        m_contenu[y] = std::vector<T>(m_longueur, valeurParDefaut);
    }
}

template <Affichable T>
void Grille<T>::afficher(std::ostream& os) const {
    for (size_t yPlusUn = m_hauteur; yPlusUn > 0; yPlusUn--){
        for (size_t x = 0; x < m_longueur; x++)  {
            os << m_contenu[yPlusUn-1][x] << " ";
        }
        os << std::endl;
    }
}

template <Affichable T>
unsigned int Grille<T>::getLongueur() const {
    return m_longueur;
}

template <Affichable T>
unsigned int Grille<T>::getHauteur() const {
    return m_hauteur;
}

template <Affichable T>
void Grille<T>::ecrireCase(Vecteur2 position, T nouvelleValeur) {
    if (position.x > m_longueur-1 || position.x < 0  || position.y > m_hauteur-1 || position.y < 0)
        return;

    m_contenu[position.y][position.x] = nouvelleValeur;
}

template <Affichable T>
T Grille<T>::lireCase(Vecteur2 position) const {
    if (position.x > m_longueur-1 || position.x < 0  || position.y > m_hauteur-1 || position.y < 0)
        return m_valeurParDefaut;

    return m_contenu[position.y][position.x];
}