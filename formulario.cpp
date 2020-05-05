#include "formulario.h"
#include "ui_formulario.h"
#include "examen.h"
#include "plataforma.h"
formulario::formulario(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formulario)
{
    ui->setupUi(this);
    connect(ui->salir_f,SIGNAL(clicked()),this,SLOT(close()));
}

formulario::~formulario()
{
    delete ui;
}
void formulario::on_iniciar_f_clicked(){
    examen *ventana1=new examen;
    ventana1->show();
}

void formulario::on_salir_f_clicked(){
    plataforma *ventana1=new plataforma;
    ventana1->show();
}
