#ifndef pelicula_h
#define pelicula_h

#include <iostream>
#include "video.h"

class Pelicula : public Video{
    public:
        Pelicula();
        Pelicula(int idVideo, string Titulo, string Genero, int Duracion, int calificacion);
        void muestra();
};


#endif