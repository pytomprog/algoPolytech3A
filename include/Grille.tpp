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
void Grille<T>::afficher() const {
    for (size_t yPlusUn = m_hauteur; yPlusUn > 0; yPlusUn--){
        for (size_t x = 0; x < m_longueur; x++)  {
            std::cout << m_contenu[yPlusUn-1][x] << " ";
        }
        std::cout << std::endl;
    }
}

template <Affichable T>
void Grille<T>::ecrireCase(int x, int y, T nouvelleValeur) {
    if (x > m_longueur-1 || x < 0  || y > m_hauteur-1 || y < 0)
        return;

    m_contenu[y][x] = nouvelleValeur;
}

template <Affichable T>
T Grille<T>::lireCase(int x, int y) const {
    if (x > m_longueur-1 || x < 0  || y > m_hauteur-1 || y < 0)
        return m_valeurParDefaut;

    return m_contenu[y][x];
}