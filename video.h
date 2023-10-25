#ifndef video_h
#define video_h

#include <iostream>
#include <string>

using namespace std;

class Video{

    //En protected para que se puedan accesar directamente desde las clases hijas
    protected:

        //Atributos

        int idVideo;
        string Titulo;
        string Genero;
        int Duracion;
        int calificacion;

    public: 

        //Constructores 
        Video();
        Video(int, string, string, int, int);

        //Funcion Virtual muestra para poder redefinirla en las clases hijas
        virtual void muestra();

        //Getters

        int getID();
        string getTitulo();
        string getGenero();
        int getDuracion();
        int getCalif();

        //Setters

        void setID(int idVideo);
        void setTitulo(string Titulo);
        void setGenero(string Genero);
        void setDuracion(int Duracion);
        void setCalif(int calificacion);

        friend class Usuario;

};

#endif