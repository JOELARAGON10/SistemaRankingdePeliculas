#include "video.h"


//Inicializanos el constructor con los valores default

Video::Video(){
    idVideo = 0;
    Titulo = "N/A";
    Genero = "N/A";
    Duracion = 0;
    calificacion = 0;
}

//Iniciamos el constructor con las variables correspondientes

Video::Video(int idVideo, string Titulo, string Genero, int Duracion, int calificacion){
    this->idVideo = idVideo;
    this->Titulo = Titulo;
    this->Genero = Genero;
    this->Duracion = Duracion;
    this->calificacion = calificacion;
    }

//Inicializamos los getters

int Video::getID(){
    return idVideo;
}

string Video::getTitulo(){
    return Titulo;
}

string Video::getGenero(){
    return Genero;
}

int Video::getDuracion(){
    return Duracion;
}

int Video::getCalif(){
    return calificacion;
}

//Inicializamos los setters

void Video::setID(int idVideo){
    this->idVideo = idVideo;
}

void Video::setTitulo(string Titulo){
    this->Titulo = Titulo;
}

void Video::setGenero(string Genero){
    this->Genero = Genero;
}

void Video::setDuracion(int Duracion){
    this->Duracion = Duracion;
}

void Video::setCalif(int calificacion){
    this->calificacion = calificacion;
}

//Inicializamos la muestra

void Video::muestra(){
    cout<< "La pelicula: "<< Titulo <<" Tiene una duracion de: "<< Duracion <<" Horas "<<endl;
    cout<<" Y su calificacion es de: "<< calificacion << " Estrellas de 5";
}