#ifndef GRAFICA_H
#define GRAFICA_H

#include <QDialog>
#include <QPixmap>
#include <QPen>
#include <QPainter>
#include <QQueue>
#include <QStack>

#include <estudiante.h>

namespace Ui {
class Grafica;
}

class Grafica : public QDialog
{
    Q_OBJECT

public:
    explicit Grafica(QStack<Estudiante*> m_estudiante, QWidget *parent = nullptr);
    ~Grafica();
public slots:
    void iniciar(int ancho, int alto);
    void texto(int x, int y, QString texto, int tamanio);
    void ejes(int iniciox,int inicioy, int grosor, int ancho, int alto, QColor color);
    void barra(int desplazamiento,int iniciox, int inicioy, int alto, int nota, QString nombre);
    void lineaPromedio(int iniciox, int alto, int notaPromedio);
private:
    Ui::Grafica *ui;
    QPixmap pixmap;
    QPainter painter;
    QPen pen;
    int ancho=420;
    int alto=420;
    int iniciox=20;
    int inicioy=40;
};

#endif // GRAFICA_H
