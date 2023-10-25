#include <iostream>
#include <vector>
#include "video.h"
#include "episodio.h"
#include "pelicula.h"

// Joel Aragon Balderas A01285754

int main(){

//Todos los objetos de tipo Episodio y Película tienen valores de duración y temporadas que reflejan la realidad.)
    vector<Video*> listaVideos;

    Video* v1 = new Pelicula(1,"Mario","Infantil",5 );
    Video* v2 = new Episodio(2,"Pilot","Sci-Fi",22 ,4 ,"Flash",6 );
    Video* v3 = new Pelicula(3,"Jhon Wick","Ficcion",3);
    Video* v4 = new Pelicula(4, "Tron", "Sci-Fi",3);
    Video* v5 = new Episodio(5, "Crueldad, Capitulo 1",5, "Demon Slayer",13);
    Video* v6 = new Pelicula(6, "Avatar", "Sci-fi",2);
    Video* v7 = new Pelicula(7, "El gato con botas", "Infantil",4);
    Video* v8 = new Pelicula(8, "La Ballena", "Drama",5);
    Video* v9 = new Pelicula(9, "The Batman","Ficcion",3);
    Video* v10 = new Pelicula(10,"Doctor Sueno","Ficcion",3);
    Video* v11 = new Episodio(11, "El sueño de alguien - Tanjiro conoce aa uzui","Aventuras",25,5,"Demon Slayer temporada 2",13);
    Video* v12 = new Episodio(12, "Yoriichi modelo cero, Tanjiro comienza su aventura","Aventuras",27,5,"Demon Slayer temporada 2",13);
    Video* v13 = new Episodio(13, "Una espada de hace más de 300 años, Tanjiro conoce mas de su pasado","Aventuras",24,5,"Demon Slayer temporada 2",13);
    Video* v14 = new Episodio(14, "Gracias, Tokito","Aventuras",24,5,"Demon Slayer temporada 2",13);
    Video* v15 = new Pelicula(15, "Joker","Ficcion",5);
    Video* v16 = new Pelicula(16, "Morbius","Sci-Fi",4);
    Video* v17 = new Pelicula(17, "Alien: covenant","Sci-Fi",4);
    Video* v18 = new Pelicula(18,"Jurassic World","Sci-Fi",3);
    Video* v19 = new Episodio(19, "Asteroid Blues","Ficcion",25,4,"CowBoyBebop",12);
    Video* v20 = new Episodio(20, "Stray Dog Strut","Ficcion",22,3,"CowBoyBebop",12);
    Video* v21 = new Episodio(21, "Honky Tonk Women","Ficcion",22,5,"CowBoyBebop",12);
    Video* v22 = new Pelicula(22, "Eternals","Accion",4);
    Video* v23 = new Pelicula(23, "The Martian","Ficcion",3);
    Video* v24 = new Pelicula(24, "Soy Leyenda","Accion",5);
    Video* v25 = new Pelicula(25, "Insidious","Terror",2);
    Video* v26 = new Pelicula(26, "The nun","Terror",2);
    Video* v27 = new Pelicula(27,"Nop","Sci-Fi",5);
    Video* v28 = new Pelicula(28,"Megan","Terror",1);
    Video* v29 = new Pelicula(29,"Interestelar","Ficcion",4);
    Video* v30 = new Pelicula(30, "No exit","Terror",4);
    Video* v31 = new Pelicula(31,"Cloverfield","Sci-fi",5);
    Video* v32 = new Pelicula(32,"Dia de la Independencia","Sci-Fi",2);
    Video* v33 = new Pelicula(33,"Replicas","Ficcion",4);
    Video* v34 = new Pelicula(34,"Chappie","Ficcion",4);
    Video* v35 = new Pelicula(35,"Shazam","Ficcion",4);
    Video* v36 = new Episodio(36,"Gateway Shuffle","Aventuras",5,"Demon Slayer Temporada 2",4);
    Video* v37 = new Episodio(37,"Ballad of Fallen Angels","Aventura",4,"Demon Slayer Temporada 2",4);
    Video* v38 = new Episodio(38,"Sympathy for the Devil",5,"Demon Slayer Temporada 2",4);
    Video* v39 = new Pelicula(39,"BloodShot","Accion",3);
    Video* v40 = new Pelicula(40,"La Morgue","Terror",4);



    listaVideos.push_back(v1);
    listaVideos.push_back(v2);
    listaVideos.push_back(v3);
    listaVideos.push_back(v4);
    listaVideos.push_back(v5);
    listaVideos.push_back(v6);
    listaVideos.push_back(v7);
    listaVideos.push_back(v8);
    listaVideos.push_back(v9);
    listaVideos.push_back(v10);
    listaVideos.push_back(v11);
    listaVideos.push_back(v12);
    listaVideos.push_back(v13);
    listaVideos.push_back(v14);
    listaVideos.push_back(v15);
    listaVideos.push_back(v16);
    listaVideos.push_back(v17);
    listaVideos.push_back(v18);
    listaVideos.push_back(v19);
    listaVideos.push_back(v20);
    listaVideos.push_back(v21);
    listaVideos.push_back(v22);
    listaVideos.push_back(v23);
    listaVideos.push_back(v24);
    listaVideos.push_back(v25);
    listaVideos.push_back(v26);
    listaVideos.push_back(v27);
    listaVideos.push_back(v28);
    listaVideos.push_back(v29);
    listaVideos.push_back(v30);
    listaVideos.push_back(v31);
    listaVideos.push_back(v32);
    listaVideos.push_back(v33);
    listaVideos.push_back(v34);
    listaVideos.push_back(v35);
    listaVideos.push_back(v36);
    listaVideos.push_back(v37);
    listaVideos.push_back(v38);
    listaVideos.push_back(v39);
    listaVideos.push_back(v40);


int accion;
int califBusqueda;
int califDeseada;
string generoBusqueda;
string nombreSerie;

cout <<" Sean Bienvenid@ a la base de datos!"<<endl;
cout <<" Ingrese el numero dependiendo de la accion que desea realizar"<<endl;

while (true) {
cout <<" ----------------------------------------------------------------------------"<<endl;
cout <<"( 1 ) para buscar Los videos "<<endl;
cout <<"( 2 ) para buscar el genero "<<endl;
cout <<"( 3 ) Mostrar los episodios de una serie y calificacion "<<endl;
cout <<"( 4 ) Mostrar la calificacion de las peliculas "<<endl;
cout <<"( 5 ) Calificar algun video "<<endl;
cout <<"( 6 ) Salir "<<endl;
cout <<"------------------------------------------------------------------------------"<<endl;
cin >> accion;

if (accion == 1){
    cout << "Ingrese la calificacion deseada: ";
    cin >> califBusqueda;

    cout << "Videos con calificacion " << califBusqueda << ":" << endl;
    for (const auto& video : listaVideos) {
        if (video->getCalif() == califBusqueda) {
            video->muestra();
        }
    }   
} else if (accion == 2){
    cout << "Ingrese el genero deseado: ";
    cin >> generoBusqueda;

    cout << "Videos del genero " << generoBusqueda << ":" << endl;
    for (const auto& video : listaVideos) {
        if (video->getGenero() == generoBusqueda) {
            video->muestra();
        }
    }
} else if (accion == 3){
    string nombreSerie;
    int califBusqueda;

    cout << "Ingrese el nombre de la serie: ";
    getline(cin >> ws, nombreSerie);  // Usamos getline() para leer la línea completa, incluyendo espacios en blanco

    cout << "Ingrese la calificacion deseada: ";
    cin >> califBusqueda;

    cout << "Episodios de la serie " << nombreSerie << " con calificacion " << califBusqueda << ":" << endl;

    for (Video* video : listaVideos) {
        Episodio* episodio = dynamic_cast<Episodio*>(video);

        if (episodio != nullptr && episodio->getSerie() == nombreSerie && episodio->getCalif() == califBusqueda) {
            cout << "Titulo: " << episodio->getTitulo() << endl;
            cout << "Duracion: " << episodio->getDuracion() << " minutos" << endl;
            cout << "Calificaciin: " << episodio->getCalif() << "/5 Estrellas" << endl;
            cout << endl;
        }
    }
} else if (accion == 4){
    int califBusqueda;

    cout << "Ingrese la calificacion deseada: ";
    cin >> califBusqueda;

    cout << "Peliculas con calificacion " << califBusqueda << ":" << endl;

    for (Video* video : listaVideos) {
        Pelicula* pelicula = dynamic_cast<Pelicula*>(video);

        if (pelicula != nullptr && pelicula->getCalif() == califBusqueda) {
            cout << "Titulo: " << pelicula->getTitulo() << endl;
            cout << "Genero: " << pelicula->getGenero() << endl;
            cout << "Duracion: " << pelicula->getDuracion() << " minutos" << endl;
            cout << "Calificacion: " << pelicula->getCalif() << "/5 Estrellas" << endl;
            cout << endl;
        }
    }
} else if (accion == 5){
    string tituloCalificar;
    int valorCalificacion;

    cout << "Ingrese el titulo del video que desea calificar: ";
    cin.ignore();
    getline(cin, tituloCalificar);

    cout << "Ingrese el valor de calificacion (entre 0 y 5): ";
    cin >> valorCalificacion;

    for (Video* video : listaVideos) {
        if (video->getTitulo() == tituloCalificar) {
            video->setCalif(valorCalificacion);
            cout << "Video calificado correctamente." << endl;
            break;
        }
    }
} else if (accion == 6){
    cout << "Saliendo del programa..." << endl;
    break;
}
}
}


