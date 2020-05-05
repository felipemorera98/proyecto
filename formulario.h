#ifndef FORMULARIO_H
#define FORMULARIO_H
#include <string>
#include <QWidget>
using namespace std;
namespace Ui {
class formulario;
}

class formulario : public QWidget
{
    Q_OBJECT

public:
    explicit formulario(QWidget *parent = 0);
    ~formulario();

private slots:


    void on_iniciar_f_clicked();

    void on_salir_f_clicked();

private:
    Ui::formulario *ui;
};

#endif // FORMULARIO_H
