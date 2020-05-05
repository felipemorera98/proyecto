#include "plataforma.h"
#include "ui_plataforma.h"
#include "registro.h"
#include "formulario.h"
#include <string>
using namespace std;
plataforma::plataforma(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plataforma)

{
    ui->setupUi(this);
    connect(ui->registro_p,SIGNAL(clicked()),this,SLOT(close()));


}

plataforma::~plataforma()
{
    delete ui;
}


void plataforma::on_registro_p_clicked(){
    registro *ventana1=new registro;
    ventana1->show();

}

void plataforma::on_ingreso_p_clicked(){
    QString nombre="hola";
    //abrir base de datos y preguntar sobre el nombre de ususario y la contraseña
    int x = QString::compare(ui->password_p->text(),nombre, Qt::CaseInsensitive);
    if(x==0){
        formulario *ventana1= new formulario;
        ventana1->show();

    }


}
