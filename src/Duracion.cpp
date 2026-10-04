// Implementación de la clase Duracion.

#include "Duracion.h"

#include <iostream>

Duracion::Duracion(int min, int seg) : minutos(min), segundos(seg)
{
    std::cout << "Construyendo Duracion" << std::endl;
    // TODO 1.1: valida y normaliza.
    //   - Si min o seg son negativos, la duración queda en 0:00.
    //   - Si seg es mayor a 59, convierte el excedente en minutos
    //     (0 min 75 seg debe quedar como 1:15).
    if (minutos < 0 || segundos < 0)
    {
        minutos = 0;
        segundos = 0;
    }
    else
    {

        minutos = minutos + (segundos / 60);
        segundos = segundos % 60;
    }
    if (minutos > 300)
    {
        minutos = 300;
        segundos = 0; // Si llega al tope, reseteamos los segundos sobrantes
    }
}
// Pregunta: ¿por qué conviene validar aquí y no en main?
/*Porque si aqui se valida la duracion, los valores en el main siempre van a ser validos
y no va a haber errorrs de valores*/

int Duracion::getMinutos() const { return minutos; }

int Duracion::getSegundos() const { return segundos; }

// TODO 1.2: implementa int Duracion::totalSegundos() const
// Devuelve la duración completa expresada en segundos.
int Duracion::totalSegundos() const
{

    int total = (minutos * 60) + segundos;
    return total;
}

// TODO 1.3: implementa void Duracion::imprimir() const
// Imprime con el formato m:ss (por ejemplo 3:05, no 3:5).
void Duracion::imprimir() const
{

    if (segundos < 10)
    {
        std::cout << minutos << ":0" << segundos;
    }
    else
    {
        std::cout << minutos << ":" << segundos;
    }
}
Duracion::~Duracion()
{
    std::cout << "Destruyendo Duracion" << std::endl;
}
