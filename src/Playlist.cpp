// Implementación de la clase Playlist.

#include "Playlist.h"

#include <iostream>
#include <algorithm>

// TODO 4.1: implementa el constructor de Playlist.
Playlist::Playlist(std::string _nombre)
{
    nombre = _nombre;
}

// TODO 4.2: implementa  bool Playlist::agregarCancion(Cancion* cancion)
//   Devuelve false si el puntero es nullptr o si la canción ya está en la
//   playlist; en otro caso la agrega y devuelve true.
bool Playlist::agregarCancion(Cancion *nuevaCancion)
{
    if (nuevaCancion == nullptr)
    {
        return false;
    }

    for (size_t i = 0; i < canciones.size(); i++)
    {
        if (canciones[i] == nuevaCancion)
        {
            return false;
        }
    }

    canciones.push_back(nuevaCancion);
    return true;
}

// TODO 4.3: implementa  bool Playlist::agregarPodcast(Podcast* podcast)
//   Mismas reglas que agregarCancion.
bool Playlist::agregarPodcast(Podcast *nuevoPodcast)
{
    if (nuevoPodcast == nullptr)
    {
        return false;
    }

    for (size_t i = 0; i < podcasts.size(); i++)
    {
        if (podcasts[i] == nuevoPodcast)
        {
            return false;
        }
    }

    podcasts.push_back(nuevoPodcast);
    return true;
}

// TODO 4.4: implementa  int Playlist::cantidadPistas() const
int Playlist::cantidadPistas() const
{
    return canciones.size() + podcasts.size();
}

// TODO 4.5: implementa  Duracion Playlist::duracionTotal() const
//   Suma los segundos de todas las pistas y devuelve una Duracion.
Duracion Playlist::duracionTotal() const
{
    int segundosAcumulados = 0;

    for (size_t i = 0; i < canciones.size(); i++)
    {
        segundosAcumulados += canciones[i]->getDuracion().totalSegundos();
    }

    for (size_t i = 0; i < podcasts.size(); i++)
    {
        segundosAcumulados += podcasts[i]->getDuracion().totalSegundos();
    }

    int minFinales = segundosAcumulados / 60;
    int segFinales = segundosAcumulados % 60;

    return Duracion(minFinales, segFinales);
}

// TODO 4.6: implementa  void Playlist::mostrar() const
//   Imprime el nombre, cada pista, la cantidad de pistas y la duración total.
void Playlist::mostrar() const
{
    std::cout << "=== PLAYLIST: " << nombre << " ===" << std::endl;

    std::cout << "\n--- Canciones ---" << std::endl;
    for (size_t i = 0; i < canciones.size(); i++)
    {
        std::cout << (i + 1) << ". ";
        canciones[i]->mostrar();
    }

    std::cout << "\n--- Podcasts ---" << std::endl;
    for (size_t i = 0; i < podcasts.size(); i++)
    {
        std::cout << (i + 1) << ". ";
        podcasts[i]->mostrar();
    }

    std::cout << "\n=================================" << std::endl;
    std::cout << "Cantidad total de pistas: " << cantidadPistas() << std::endl;

    Duracion total = duracionTotal();
    std::cout << "Duración total de la lista: ";
    total.imprimir();
    std::cout << "\n=================================" << std::endl;
}
