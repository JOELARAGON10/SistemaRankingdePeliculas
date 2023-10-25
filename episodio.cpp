#include "episodio.h"

//Se define la herencia 

Episodio::Episodio() : Video() {

    //Iniciamos los nuevos parametros (NO LOS HEREDADOS) solamente los nuevos
    serie = "N/A";
    numEP = 0;
    numTemp = 0;
}

//Al inicializar el constructor con parametros, especificamos que variables heredamos para no tener que volverlas a inicializar

Episodio::Episodio(int idVideo, string Titulo, string Genero, int Duracion, int calificacion, string serie, int numEP, int numTemp)
: Video(idVideo, Titulo, Genero, Duracion, calificacion)

{
    this->serie = serie;
    this->numEP = numEP;
    this->numTemp = numTemp;
}

//Inicializamos los Getters y Setters

string Episodio::getSerie(){
    return serie;
}

int Episodio::getNumEP(){
    return numEP;
}

int Episodio::getNumTemp(){
    return numTemp;
}

void Episodio::setSerie(string serie){
    this->serie = serie;
}

void Episodio::setNumEP(int numEP){
    this->numEP = numEP;
}

void Episodio::setNumTemp(int numTemp){
    this->numTemp= numTemp;
}

void Episodio::muestra(){
    cout << " s " << idVideo << " " << Titulo << " " << Genero << " " << Duracion << " " << calificacion << " " << serie << " " << numEP << " " << numTemp << endl;
}