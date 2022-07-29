#include "grafica.h"
#include "ui_grafica.h"

Grafica::Grafica(QStack<Estudiante*> m_estudiante,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Grafica)
{
    ui->setupUi(this);

    ui->outTabla->resize(alto+40,ancho+20);
    pixmap = QPixmap(ui->outTabla->size());
    iniciar(ancho,10);
    ejes(iniciox, inicioy, 2,ancho,alto,Qt::darkCyan);

    int despalzaminetoX=0, sumaNotas=0;
    int notaF;
    for(int i=0;i < m_estudiante.size(); i++){

        notaF = m_estudiante.at(i)->getNotaFinal();
        barra(despalzaminetoX,iniciox, inicioy,alto,notaF,m_estudiante.at(i)->getNombre());
        despalzaminetoX+=30;
        sumaNotas+=notaF;
    }
    lineaPromedio(iniciox,alto,((sumaNotas*1.0)/m_estudiante.size()));
    ui->outTabla->setPixmap(pixmap);
}

Grafica::~Grafica()
{
    delete ui;
}

void Grafica::iniciar(int ancho, int alto)
{
    pixmap.fill(Qt::white);
    painter.begin(&pixmap);
    pen.setColor(Qt::black);
    texto((ancho/3), alto+5, "Ponderación de notas", 12);
}

void Grafica::texto(int x, int y, QString texto, int tamanio)
{
    painter.setPen(pen);
    QFont font = painter.font();
    font.setPixelSize(tamanio);
    painter.setFont(font);
    painter.drawText(x,y,texto);
}

void Grafica::ejes(int iniciox, int inicioy, int grosor, int ancho, int alto, QColor color)
{
    pen.setWidth(grosor);
    pen.setColor(color);//Qt::red
    pen.setJoinStyle(Qt::MiterJoin);
    painter.setPen(pen);
    painter.drawLine(iniciox,inicioy-30,iniciox,alto);
    texto(iniciox-12, 20, "Y", 16);
    painter.drawLine(iniciox,alto,ancho,alto);
    texto(ancho, alto+10, "X", 16);
    painter.drawLine(iniciox-3,alto/2,12,alto/2);
    pen.setColor(Qt::black);
    texto(0, alto/2, "50", 9);
}

void Grafica::barra(int desplazamiento, int iniciox, int inicioy, int alto, int nota, QString nombre)
{
    if (nota>69){
        painter.setBrush(Qt::green);
    }else{
        painter.setBrush(Qt::red);
    }
    pen.setColor(Qt::black);
    painter.setPen(pen);
    if (nota==0)
       inicioy=alto;
    else
       if (nota==50)
          inicioy=(alto/2);
       else
             inicioy= alto -((alto*nota)/100)+15;
    texto(iniciox+10+desplazamiento, inicioy-2, nombre, 10);
    texto(iniciox+10+desplazamiento, inicioy-10, QString::number(nota), 10);
    painter.drawRect(iniciox+20+desplazamiento, inicioy, 20,alto - inicioy);

}

void Grafica::lineaPromedio(int iniciox, int alto, int notaPromedio)
{
    painter.setBrush(Qt::green);
    pen.setColor(Qt::black);
    painter.setPen(pen);
    int valor;
    if (notaPromedio==0)
       valor=0;
    else
       if (notaPromedio==50)
          valor=-(alto/2);
       else
          valor= alto -((alto*notaPromedio)/100)+15;
    painter.drawRect(iniciox+10, valor ,ancho-20,1);
    texto(iniciox+10, valor+10 ,QString::number(notaPromedio), 10);

}
