#include "ingreso.h"
#include "ui_ingreso.h"

Ingreso::Ingreso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ingreso)
{
    ui->setupUi(this);
    ui->inPassword->setEchoMode(QLineEdit::Password);

    QFile archivo;
    QDir actual = QDir::current();
    QTextStream io;
    QString nombreArchivo = actual.absolutePath() + "/usuarios.csv";

    QString Username, Password;
    archivo.setFileName(nombreArchivo);

    archivo.open(QIODevice::ReadOnly | QIODevice::Text);

    if(!archivo.isOpen()){
        QMessageBox::critical(this,tr("Error"),tr("Archivo de usuarios no encontrado"));
        return;
    }

    io.setDevice(&archivo);
    while(!io.atEnd()){
        auto linea = io.readLine();
        auto datos = linea.split(";");

        Username = datos[0];
        Password = datos[1];

        m_usuario.append(new Usuario(Username,Password));
    }

    archivo.close();
}

Ingreso::~Ingreso()
{
    delete ui;
}

void Ingreso::on_btnAceptar_clicked()
{
    bool bandera = false;
    for(int i=0; i<m_usuario.size(); i++){
        if(ui->inUsuario->text() == m_usuario.at(i)->getUsuario() && ui->inPassword->text() == m_usuario.at(i)->getPassword()){
            bandera = true;
        }
    }

    if(bandera){
        Principal *acceso = new Principal(ui->inUsuario->text());

        acceso->setWindowModality(Qt::ApplicationModal);
        acceso->show();

        close();
    }else{
        QMessageBox::critical(this,tr("Error"),tr("Usuario no existe"));
    }
}


void Ingreso::on_btnCancelar_clicked()
{
    close();
}

