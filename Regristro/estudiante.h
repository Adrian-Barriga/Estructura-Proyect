#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <QString>

class Estudiante
{
public:
    Estudiante(QString m_cedula, QString m_nombre, int m_notaFinal);

    void setCedula(QString m_cedula);
    void setNombre(QString m_nombre);
    void setNotaFinal(int m_notaFinal);

    QString getNombre();
    QString getCedula();
    int getNotaFinal();

private:
    QString m_cedula;
    QString m_nombre;
    int m_notaFinal;
};

#endif // ESTUDIANTE_H
