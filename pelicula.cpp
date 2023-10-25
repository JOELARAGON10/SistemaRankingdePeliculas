#include "pelicula.h"

Pelicula::Pelicula() : Video(){

}

Pelicula::Pelicula(int idVideo, string Titulo, string Genero, int Duracion, int calificacion)
    : Video(idVideo, Titulo, Genero, Duracion, calificacion) {

}

void Pelicula::muestra(){
    cout << " p "<< idVideo << " " << Titulo << " " <<  Genero << " "<< Duracion << " " << calificacion <<endl;

}