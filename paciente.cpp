#include "paciente.h"


string paciente::getNombre() const{
    return nombre;
}
void paciente::setNombre(const string _nombre){
    nombre = _nombre;
}
string paciente::getApellido() const{
    return apellido;
}
void paciente::setApellido(const string _apellido){
    apellido = _apellido;
}
int paciente::getDoc() const{
    return doc;
}
void paciente::setDoc(int _doc){
    doc = _doc;
}
string paciente::getDireccion() const{
    return direccion;
}
void paciente::setDireccion(const string _direccion){
    direccion = _direccion;
}
string paciente::getRaza() const{
    return raza;
}
void paciente::setRaza(const string _raza){
    raza = _raza;
}
string paciente::getGenero() const{
    return genero;
}
void paciente::setGenero(const string _genero){
    genero = _genero;
}
string paciente::getIngreso() const{
    return ingreso;
}
void paciente::setIngreso(const string _ingreso){
    ingreso = _ingreso;
}
void paciente::setfecha(int _dia, int _mes, int _anio){
    dia=_dia;
    mes=_mes;
    anio=_anio;
}
int paciente::getfecha(){
    return dia,mes,anio;
}
paciente::paciente(){

}
