#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QTextStream>
#include <QFileDialog>

#include <QQueue>
#include <QStack>

#include "estudiante.h"
#include "grafica.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QString Usuario, QWidget *parent = nullptr);
    ~Principal();

private slots:

    void on_btnBuscar_clicked();
    void on_btnInsertar_clicked();
    void on_btnSalir_clicked();
    void on_btnGuardar_clicked();
    void on_btnGraficar_clicked();

private:
    Ui::Principal *ui;

    QString m_usuario;
    int indice = 0;

    QList <Estudiante*> m_estudiantes;

    QStack <Estudiante*> m_estudiante;

};
#endif // PRINCIPAL_H
