/********************************************************************************
** Form generated from reading UI file 'grafica.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICA_H
#define UI_GRAFICA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Grafica
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *outTabla;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Grafica)
    {
        if (Grafica->objectName().isEmpty())
            Grafica->setObjectName(QString::fromUtf8("Grafica"));
        Grafica->resize(743, 640);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Recursos/Imagenes/analitica.png"), QSize(), QIcon::Normal, QIcon::Off);
        Grafica->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Grafica);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        outTabla = new QLabel(Grafica);
        outTabla->setObjectName(QString::fromUtf8("outTabla"));

        verticalLayout->addWidget(outTabla);

        buttonBox = new QDialogButtonBox(Grafica);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Grafica);
        QObject::connect(buttonBox, SIGNAL(accepted()), Grafica, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Grafica, SLOT(reject()));

        QMetaObject::connectSlotsByName(Grafica);
    } // setupUi

    void retranslateUi(QDialog *Grafica)
    {
        Grafica->setWindowTitle(QCoreApplication::translate("Grafica", "Dialog", nullptr));
        outTabla->setText(QCoreApplication::translate("Grafica", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Grafica: public Ui_Grafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICA_H
