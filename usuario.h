#ifndef USUARIO_H
#define USUARIO_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <string>
using namespace std;
class usuario{
private:
   string nombre;
   string apellido;
   int doc,dia,mes,anio;

public:
    usuario();
    int getfecha() const;
    void setfecha(int,int,int);
    int getDoc() const;
    void setDoc(int value);
    string getNombre() const;
    void setNombre(const string );
    string getApellido() const;
    void setApellido(const string );
};

#endif // USUARIO_H
