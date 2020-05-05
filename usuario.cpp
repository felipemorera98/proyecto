#include "usuario.h"

int usuario::getDoc() const{
    return doc;
}

void usuario::setDoc(int _doc){
    doc = _doc;
}
string usuario::getNombre() const{
    return nombre;
}

void usuario::setNombre(const string _nombre){
    nombre = _nombre;
}

string usuario::getApellido() const{
    return apellido;
}

void usuario::setApellido(const string _apellido){
    apellido = _apellido;
}

void usuario::setfecha(int _dia, int _mes, int _anio){
    dia=_dia;
    mes=_mes;
    anio=_anio;
}
int usuario::getfecha() const{
    return dia;
}
usuario::usuario()
{

}
