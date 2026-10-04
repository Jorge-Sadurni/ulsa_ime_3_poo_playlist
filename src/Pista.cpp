// Implementación de la clase Pista.

#include "Pista.h"
#include <iostream>
#include <cctype>

Pista::Pista(const std::string &t, int min, int seg)
    : titulo(t), duracion(min, seg)
{
    std::cout << "Construyendo Pista" << std::endl;

    size_t espacios = 0;
    for (size_t i = 0; i < titulo.length(); i++)
    {
        if (std::isspace(titulo[i]))
        {
            espacios++;
        }
    }

    // TODO 2.1: si el título llega vacío o con puros espacios, guarda "Sin título".
    if (titulo.empty() || espacios == titulo.length())
    {
        titulo = "Sin título";
    }

    // Pregunta: ¿qué pasaría si quitaras duracion(min, seg) de la lista de inicialización?
    /* Dara error ya que como la duracion es parte de la relacion de composicion
     y de la clase duracionno se puede inicializar por defecto*/
}

std::string Pista::getTitulo() const { return titulo; }

Duracion Pista::getDuracion() const { return duracion; }

// TODO 2.2: implementa void Pista::setTitulo(const std::string& nuevoTitulo)
void Pista::setTitulo(const std::string &nuevoTitulo)
{

    size_t espacios = 0;
    for (size_t i = 0; i < nuevoTitulo.length(); i++)
    {
        if (std::isspace(nuevoTitulo[i]))
        {
            espacios++;
        }
    }

    if (nuevoTitulo.empty() || espacios == nuevoTitulo.length())
    {
        titulo = "Sin título";
    }
    else
    {
        titulo = nuevoTitulo;
    }
}

// TODO 2.3: implementa void Pista::mostrarInfo() const
void Pista::mostrarInfo() const
{
    std::cout << "Titulo: " << titulo << " | Duracion: ";
    duracion.imprimir();
    std::cout << std::endl;
}

Pista::~Pista()
{
    std::cout << "Destruyendo Pista" << std::endl;
}
