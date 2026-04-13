#include <iostream>
#include <string>
#include "Music_Library.h"
using namespace std;


int main() {
    //crear cancion
    Music_Library cancion1("One kiss", "Riize", 211);
    Music_Library cancion2("Alright", "Kendrick Lamar", 219);

    cout<< "Cancion 1: \n";
    cancion1.Music_Info();  //mostrar titulo autor y duracion
    cout << cancion1.Duration_Info()<<"\n"; //verificar funcionamiento de metodo de duracion

    cout<< "Cancion 2: \n";
    cancion2.Music_Info();
    cout << cancion2.Duration_Info()<<"\n";

    return 0;
}