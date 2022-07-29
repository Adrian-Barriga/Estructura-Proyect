/********************************************************************************
** Form generated from reading UI file 'ingreso.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESO_H
#define UI_INGRESO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ingreso
{
public:
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *inUsuario;
    QLabel *label_2;
    QLineEdit *inPassword;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnAceptar;
    QPushButton *btnCancelar;
    QWidget *widget_4;

    void setupUi(QDialog *Ingreso)
    {
        if (Ingreso->objectName().isEmpty())
            Ingreso->setObjectName(QString::fromUtf8("Ingreso"));
        Ingreso->resize(428, 175);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/Imagenes/programador.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ingreso->setWindowIcon(icon);
        widget_2 = new QWidget(Ingreso);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(9, 9, 412, 38));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(132, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget = new QWidget(Ingreso);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 53, 211, 72));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        inUsuario = new QLineEdit(widget);
        inUsuario->setObjectName(QString::fromUtf8("inUsuario"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inUsuario);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        inPassword = new QLineEdit(widget);
        inPassword->setObjectName(QString::fromUtf8("inPassword"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inPassword);

        widget_3 = new QWidget(Ingreso);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(9, 131, 412, 42));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(269, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnAceptar = new QPushButton(widget_3);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));

        horizontalLayout_2->addWidget(btnAceptar);

        btnCancelar = new QPushButton(widget_3);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));

        horizontalLayout_2->addWidget(btnCancelar);

        widget_4 = new QWidget(Ingreso);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(310, 50, 91, 81));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Recursos/Imagenes/usuario desconocido.png);\n"
"border-image: url(:/Recursos/Imagenes/usuario desconocido.png);"));

        retranslateUi(Ingreso);

        QMetaObject::connectSlotsByName(Ingreso);
    } // setupUi

    void retranslateUi(QDialog *Ingreso)
    {
        Ingreso->setWindowTitle(QCoreApplication::translate("Ingreso", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Ingreso", "IDENTIFICATE CON TUS CREDENCIALES", nullptr));
        label->setText(QCoreApplication::translate("Ingreso", "USUARIO:", nullptr));
        label_2->setText(QCoreApplication::translate("Ingreso", "CONTRASE\303\221A:", nullptr));
        btnAceptar->setText(QCoreApplication::translate("Ingreso", "Aceptar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("Ingreso", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ingreso: public Ui_Ingreso {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESO_H
