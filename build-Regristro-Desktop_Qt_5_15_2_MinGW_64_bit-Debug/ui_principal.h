/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QLabel *label;
    QLabel *outUsuario;
    QWidget *widget_3;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLineEdit *outEstudiante;
    QLabel *label_4;
    QSpinBox *inNota;
    QTableWidget *outListado;
    QPushButton *btnInsertar;
    QPushButton *btnGraficar;
    QPushButton *btnGuardar;
    QPushButton *btnSalir;
    QLineEdit *inCedula;
    QLabel *label_2;
    QPushButton *btnBuscar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QString::fromUtf8("Principal"));
        Principal->resize(723, 339);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/Imagenes/analitica.png"), QSize(), QIcon::Normal, QIcon::Off);
        Principal->setWindowIcon(icon);
        Principal->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 126, 61);\n"
"background-color: rgb(231, 131, 98);"));
        centralwidget = new QWidget(Principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 280, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        outUsuario = new QLabel(widget);
        outUsuario->setObjectName(QString::fromUtf8("outUsuario"));
        outUsuario->setGeometry(QRect(300, 10, 73, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        outUsuario->setFont(font1);
        outUsuario->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Tahoma\";"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(420, -10, 81, 71));
        widget_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Recursos/Imagenes/usuario-verificado.png);"));

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 2);

        outEstudiante = new QLineEdit(widget_2);
        outEstudiante->setObjectName(QString::fromUtf8("outEstudiante"));
        outEstudiante->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        outEstudiante->setReadOnly(true);

        gridLayout->addWidget(outEstudiante, 1, 2, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        inNota = new QSpinBox(widget_2);
        inNota->setObjectName(QString::fromUtf8("inNota"));
        inNota->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(inNota, 2, 2, 1, 1);

        outListado = new QTableWidget(widget_2);
        outListado->setObjectName(QString::fromUtf8("outListado"));
        outListado->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(outListado, 3, 0, 4, 3);

        btnInsertar = new QPushButton(widget_2);
        btnInsertar->setObjectName(QString::fromUtf8("btnInsertar"));
        btnInsertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnInsertar, 3, 3, 1, 1);

        btnGraficar = new QPushButton(widget_2);
        btnGraficar->setObjectName(QString::fromUtf8("btnGraficar"));
        btnGraficar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnGraficar, 4, 3, 1, 1);

        btnGuardar = new QPushButton(widget_2);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnGuardar, 5, 3, 1, 1);

        btnSalir = new QPushButton(widget_2);
        btnSalir->setObjectName(QString::fromUtf8("btnSalir"));
        btnSalir->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnSalir, 6, 3, 1, 1);

        inCedula = new QLineEdit(widget_2);
        inCedula->setObjectName(QString::fromUtf8("inCedula"));
        inCedula->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(inCedula, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 2);

        btnBuscar = new QPushButton(widget_2);
        btnBuscar->setObjectName(QString::fromUtf8("btnBuscar"));
        btnBuscar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnBuscar, 0, 3, 1, 1);


        verticalLayout->addWidget(widget_2);

        Principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 723, 21));
        Principal->setMenuBar(menubar);
        statusbar = new QStatusBar(Principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Principal->setStatusBar(statusbar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QCoreApplication::translate("Principal", "Principal", nullptr));
        label->setText(QCoreApplication::translate("Principal", "USUARIO INGRESADO:", nullptr));
        outUsuario->setText(QCoreApplication::translate("Principal", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Principal", "ESTUDIANTE:", nullptr));
        label_4->setText(QCoreApplication::translate("Principal", "NOTA:", nullptr));
        btnInsertar->setText(QCoreApplication::translate("Principal", "INSERTAR", nullptr));
        btnGraficar->setText(QCoreApplication::translate("Principal", "GRAFICAR", nullptr));
        btnGuardar->setText(QCoreApplication::translate("Principal", "GUARDAR", nullptr));
        btnSalir->setText(QCoreApplication::translate("Principal", "SALIR", nullptr));
        label_2->setText(QCoreApplication::translate("Principal", "CEDULA:", nullptr));
        btnBuscar->setText(QCoreApplication::translate("Principal", "BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
