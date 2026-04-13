
#ifndef MUSIC_LIBRARY_H
#define MUSIC_LIBRARY_H
#include <string>
using namespace std;

class Music_Library {

private:
    // atributos
    string name;
    string author;
    int duration;

public:
    //constructor
    Music_Library(string name, string author, int duration);

    //metodos
    void Music_Info();
    string Duration_Info();

};


#endif //MUSIC_LIBRARY_H