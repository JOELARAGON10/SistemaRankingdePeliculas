#ifndef episodio_h
#define episodio_h

#include <iostream>
#include "video.h"

using namespace std;

//Declaramos la clase episodio y heredamos de la clase Video

class Episodio : public Video{

    //Privados por que no tendremos mas clases hijas

    private:

    //Atributos

        string serie;
        int numEP;
        int numTemp;

    public:

        //Constructores y definicion de setters y getters

        Episodio();
        Episodio(int idVideo, string Titulo, string Genero, int Duracion, int calificacion, string serie, int numEP, int numTemp);
        string getSerie();
        int getNumEP();
        int getNumTemp();
        void muestra();
        void setSerie(string serie);
        void setNumEP(int numEP);
        void setNumTemp(int numTemp);
};

#endif