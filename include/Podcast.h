// Interfaz de la clase Podcast.
// Relación: un Podcast ES UNA Pista (herencia).

#ifndef PODCAST_H
#define PODCAST_H

#include <string>

#include "Pista.h"

// TODO 3.2: declara la clase Podcast derivada de Pista con herencia pública.
class Podcast : public Pista
{
private:
    std::string anfitrion;
    int numeroEpisodio;

public:
    Podcast(std::string titulo, int min, int seg, std::string anfitrion, int numeroEpisodio);
    std::string getAnfitrion() const;
    int getNumeroEpisodio() const;
    void mostrar() const;
};
//   siguiendo el mismo patrón que Cancion.
//
// Pregunta: ¿qué código te ahorraste gracias a la herencia?
/* Gracias a la herencia con la clase base, pista, me ahorre declarar los atributos como titulo y duracion
al igual que sus metodos*/

#endif
