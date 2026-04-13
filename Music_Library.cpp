

#include "Music_Library.h"
#include <iostream>
#include <string>
using namespace std;

Music_Library::Music_Library(string name, string author, int duration) {
    this->name = name;
    this->author = author;
    this->duration = duration;
}

void Music_Library::Music_Info() {
    cout<<"Titulo: "<<name<<"\n";
    cout<<"Autor: "<<author<<"\n";
    cout<<"Duracion: "<< Duration_Info()<<"\n";
}
string Music_Library::Duration_Info() {
    int minutos = duration / 60;
    int segundos = duration % 60;
    string menorDiez;
    if (segundos < 10) {
        menorDiez = "0" + to_string(segundos);
    }
    else {
        menorDiez = to_string(segundos);
    }
    return to_string(minutos) + ":" + menorDiez;
}
