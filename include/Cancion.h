// Interfaz de la clase Cancion.
// Relación: una Cancion ES UNA Pista (herencia).

#ifndef CANCION_H
#define CANCION_H

#include <string>

#include "Pista.h"

class Cancion : public Pista
{

private:
    std::string artista;
    std::string genero;

public:
    Cancion(std::string titulo, int min, int seg, std::string artista, std::string genero);
    std::string getArtista() const;
    std::string getGenero() const;
    void mostrar() const;
    ~Cancion();
};

// TODO 3.1: declara la clase Cancion derivada de Pista con herencia pública.
//   Atributos privados: artista, genero.
//   Constructor: recibe titulo, min, seg, artista y genero.
//   Accedentes const: getArtista(), getGenero().
//   void mostrar() const;
//
// Pregunta: ¿puede Cancion leer directamente el atributo titulo de Pista?
// ¿Por qué sí o por qué no?
/*Cancion si puede leer  el atributo titulo o nombre ya que la relacion
entre estas dos clases es herencia, sin embargo lo lee independiente mediante el metodo
heredado "GetNombre()" porque el atributo titulo es privado*/

#endif
