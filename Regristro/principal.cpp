#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QString Usuario, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
    ui->outUsuario->setText(Usuario);
    m_usuario = Usuario;

    // xd

    QStringList Titulos;

    Titulos << "Nombre" << "Nota";
    ui->outListado->setColumnCount(2);
    ui->outListado->setColumnWidth(0,300);
    ui->outListado->setColumnWidth(1,150);

    ui->outListado->setHorizontalHeaderLabels(Titulos);

    ui->btnGuardar->setEnabled(false);

    // xd^2

    QFile archivo;
    QTextStream io;
    QDir actual = QDir::current();
    QString nombreArchivo = actual.absolutePath() + "/estudiantes.csv";
    QString nombre;
    QString cedula;
    archivo.setFileName(nombreArchivo);
    qDebug() << archivo.fileName();
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(this,tr("Error"),tr("Lista de estudiantes no encontrada"));
        return;
    }
    //nombreEstudiante, Password
    io.setDevice(&archivo);
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos =linea.split(";");
        cedula=datos[0];
        nombre=datos[1];

        qDebug()<< cedula << " - " << nombre;

        m_estudiantes.append(new Estudiante(cedula,nombre,0));

        m_estudiante.append(new Estudiante(cedula, nombre, 0));

    }
    archivo.close();
    //*****
    ui->inCedula->setFocus();

}

Principal::~Principal()
{
    delete ui;
}


void Principal::on_btnBuscar_clicked()
{
    bool encontrado = false;
    for (int i=0;i<m_estudiantes.size() ;i++ ) {

         qDebug()<<ui->inCedula->text()<<" -- "<<m_estudiantes.at(i)->getCedula();

        if(ui->inCedula->text() == m_estudiantes.at(i)->getCedula()){
            ui->outEstudiante->setText(m_estudiantes.at(i)->getNombre());
            encontrado = true;
            indice = i;
        }
    }

    if (encontrado == false){
         QMessageBox::critical(this,tr("Error"),tr("Estudinate no existe"));
    }
}


void Principal::on_btnInsertar_clicked()
{
    QString nombre = ui->outEstudiante->text().toUpper();
    int notaFin = ui->inNota->value();
    if (nombre.isEmpty()){
        QMessageBox::critical(this,tr("Error"),tr("Ingrese el nombre"));
        return;
    }
    int fila=ui->outListado->rowCount();
    //ingresa datos
    ui->outListado->insertRow(fila);
    ui->outListado->setItem(fila,0,new QTableWidgetItem(nombre));
    ui->outListado->setItem(fila,1,new QTableWidgetItem(QString::number(notaFin,'f',2)));

    m_estudiante.at(indice)->setNotaFinal(notaFin);

    ui->inNota->setValue(0);
    ui->inCedula->clear();
    ui->inCedula->setFocus();
    ui->btnGuardar->setEnabled(true);

    ui->outEstudiante->clear();
}


void Principal::on_btnSalir_clicked()
{
    close();
}


void Principal::on_btnGuardar_clicked()
{

}


void Principal::on_btnGraficar_clicked()
{
    Grafica *dibujar = new Grafica(m_estudiante);

    dibujar->setWindowModality(Qt::ApplicationModal);

    dibujar->show();
}

