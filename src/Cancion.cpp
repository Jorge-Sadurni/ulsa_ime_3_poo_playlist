// Implementación de la clase Cancion.

#include "Cancion.h"

#include <iostream>

// TODO 3.1: implementa el constructor de Cancion.
//   Llama al constructor de Pista desde la lista de inicialización.
Cancion::Cancion(std::string t, int min, int seg, std::string _artista, std::string _genero)
    : Pista(t, min, seg)
{
    std::cout << "Construyendo Cancion" << std::endl;
    artista = _artista;
    genero = _genero;
}

// TODO 3.1: implementa getArtista() y getGenero().
std::string Cancion::getArtista() const
{
    return artista;
}

std::string Cancion::getGenero() const
{
    return genero;
}

// TODO 3.1: implementa void Cancion::mostrar() const
void Cancion::mostrar() const
{
    mostrarInfo();

    std::cout << "Artista: " << artista << std::endl;
    std::cout << "Genero: " << genero << std::endl;
}
Cancion::~Cancion()
{
    std::cout << "Destruyendo Cancion" << std::endl;
}
// TODO 3.1: implementa getArtista() y getGenero().

// TODO 3.1: implementa  void Cancion::mostrar() const
//   Llama a mostrarInfo() y agrega artista y género.
