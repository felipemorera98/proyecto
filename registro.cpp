#include "registro.h"
#include "ui_registro.h"
#include "plataforma.h"
registro::registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registro)
{
    ui->setupUi(this);
    connect(ui->cancelar_r,SIGNAL(clicked()),this,SLOT(close()));
}

registro::~registro()
{
    delete ui;
}
void registro::on_cancelar_r_clicked(){
    plataforma *ventana1= new plataforma;
    ventana1->show();
}
