// Práctica 1: Playlist de música
// Programación Orientada a Objetos - Ingeniería Mecatrónica, 3er semestre
//
// Compilar (desde la raíz del repositorio):
//   g++ -Wall -Wextra -std=c++17 -Iinclude src/*.cpp -o playlist
// Ejecutar:
//   ./playlist
//
// Completa los TODO en el orden que indica la Fase 3 de PRACTICA.md.
// Compila después de terminar cada clase, no hasta el final.

#include <iostream>

#include "Playlist.h"
#include "Cancion.h"
#include "Podcast.h"

int main()
{
    std::cout << "Practica 1: Playlist de musica" << std::endl;
    std::cout << "Plantilla lista. Completa los TODO de include/ y src/.\n"
              << std::endl;

    // TODO 5.1: crea la biblioteca: al menos tres canciones y un podcast.
    Cancion c1("Bohemian Rhapsody", 5, 55, "Queen", "Rock");
    Cancion c2("Blinding Lights", 3, 20, "The Weeknd", "Pop");
    Cancion c3("Shape of You", 3, 53, "Ed Sheeran", "Pop");

    Podcast p1("Especial de Robotica", 45, 10, "Eduardo Gomez", 102);

    // TODO 5.2: crea dos playlists y agrega pistas a cada una.
    //   Al menos una canción debe estar en las dos playlists.
    Playlist playlistRock("Lo mejor del Rock");
    Playlist playlistPop("Mix Pop 2026");

    // Agregamos pistas a la primera playlist
    playlistRock.agregarCancion(&c1);
    playlistRock.agregarPodcast(&p1);

    // Agregamos pistas a la segunda playlist (c1 se repite aquí también)
    playlistPop.agregarCancion(&c1);
    playlistPop.agregarCancion(&c2);
    playlistPop.agregarCancion(&c3);

    // TODO 5.3: muestra ambas playlists.
    std::cout << "=== MOSTRANDO PLAYLIST 1 ===" << std::endl;
    playlistRock.mostrar();

    std::cout << "\n=== MOSTRANDO PLAYLIST 2 ===" << std::endl;
    playlistPop.mostrar();

    // TODO 5.4: experimentos guiados de la Fase 3.
    std::cout << "\n>>> TODO 5.4: EXPERIMENTO 3 (UN OBJETO, DOS PLAYLISTS) <<<" << std::endl;
    // Modificamos el título de c1 en el main y verificamos el efecto de los punteros
    c1.setTitulo("Bohemian Rhapsody (NUEVO TITULO)");

    std::cout << "\nVerificando el cambio automatico de titulo en la Playlist 1:" << std::endl;
    playlistRock.mostrar();

    // TODO 5.5: casos de prueba de la Fase 4.
    std::cout << "\n>>> TODO 5.5: CASOS DE PRUEBA (FASE 4) <<<" << std::endl;

    // Caso A: Intentar agregar un duplicado real en la misma lista (Debe dar FALSE)
    bool duplicado = playlistRock.agregarCancion(&c1);
    std::cout << "Intento de agregar duplicado en la misma lista: " << (duplicado ? "TRUE" : "FALSE") << std::endl;

    // Caso B: Intentar agregar un nullptr (Debe dar FALSE)
    bool nulo = playlistRock.agregarCancion(nullptr);
    std::cout << "Intento de agregar un nullptr: " << (nulo ? "TRUE" : "FALSE") << std::endl;

    std::cout << "\n=== COMPILACION Y PRUEBAS CONCLUIDAS CON EXITO ===" << std::endl;
    return 0;
}
