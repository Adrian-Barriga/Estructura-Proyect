#ifndef INGRESO_H
#define INGRESO_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <QFileDialog>
#include <QQueue>

#include "principal.h"
#include "usuario.h"



namespace Ui {
class Ingreso;
}

class Ingreso : public QDialog
{
    Q_OBJECT

public:
    explicit Ingreso(QWidget *parent = nullptr);
    ~Ingreso();

private slots:
    void on_btnAceptar_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::Ingreso *ui;
    QQueue <Usuario*> m_usuario;
};

#endif // INGRESO_H
