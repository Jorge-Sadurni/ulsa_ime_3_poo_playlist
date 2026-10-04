// Implementación de la clase Podcast.

#include "Podcast.h"
#include <iostream>

// TODO 3.2: implementa el constructor de Podcast.
Podcast::Podcast(std::string t, int min, int seg, std::string _anfitrion, int _numeroEpisodio)
    : Pista(t, min, seg)
{
    anfitrion = _anfitrion;
    numeroEpisodio = _numeroEpisodio;
}

// TODO 3.2: implementa getAnfitrion() y getNumeroEpisodio().
std::string Podcast::getAnfitrion() const
{
    return anfitrion;
}

int Podcast::getNumeroEpisodio() const
{
    return numeroEpisodio;
}

// TODO 3.2: implementa void Podcast::mostrar() const
void Podcast::mostrar() const
{
    mostrarInfo();

    std::cout << "Anfitrión: " << anfitrion << std::endl;
    std::cout << "Episodio número: " << numeroEpisodio << std::endl;
}
