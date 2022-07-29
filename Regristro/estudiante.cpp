#include "estudiante.h"

Estudiante::Estudiante(QString m_cedula, QString m_nombre, int m_notaFinal)
{
    this->m_cedula = m_cedula;
    this->m_nombre = m_nombre;
    this->m_notaFinal = m_notaFinal;
}

void Estudiante::setCedula(QString m_cedula)
{
    this->m_cedula = m_cedula;
}

void Estudiante::setNombre(QString m_nombre)
{
    this->m_nombre = m_nombre;
}

void Estudiante::setNotaFinal(int m_notaFinal)
{
    this->m_notaFinal = m_notaFinal;
}

QString Estudiante::getNombre()
{
    return this->m_nombre;
}

QString Estudiante::getCedula()
{
    return this->m_cedula;
}

int Estudiante::getNotaFinal()
{
    return this->m_notaFinal;
}


