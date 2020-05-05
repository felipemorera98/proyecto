#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <QMainWindow>
using namespace std;
namespace Ui {
class plataforma;
}

class plataforma : public QMainWindow
{
    Q_OBJECT

public:
    explicit plataforma(QWidget *parent = 0);
    ~plataforma();

private slots:
    void on_registro_p_clicked();
    void on_ingreso_p_clicked();

private:
    Ui::plataforma *ui;
};

#endif // PLATAFORMA_H
