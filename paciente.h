#ifndef PACIENTE_H
#define PACIENTE_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>
#include <iostream>
using namespace std;

class paciente{
private:
    string nombre;
    string apellido;
    int doc,dia,mes,anio;
    string direccion;
    string raza;
    string genero;
    string ingreso;

public:
    paciente();
    string getNombre() const;
    void setNombre(const string );
    string getApellido() const;
    void setApellido(const string );
    int getDoc() const;
    void setDoc(int value);
    int getfecha();
    void setfecha(int,int,int);
    string getDireccion() const;
    void setDireccion(const string );
    string getRaza() const;
    void setRaza(const string );
    string getGenero() const;
    void setGenero(const string );
    string getIngreso() const;
    void setIngreso(const string );
};


#endif // PACIENTE_H
