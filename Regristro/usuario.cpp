#include "usuario.h"

Usuario::Usuario(QString m_usuario, QString m_password)
{
    this->m_usuario = m_usuario;
    this->m_password = m_password;
}

void Usuario::setUsuario(QString m_usuario)
{
    this->m_usuario = m_usuario;
}

void Usuario::setPassword(QString m_password)
{
    this->m_password = m_password;
}

QString Usuario::getUsuario()
{
    return this->m_usuario;
}

QString Usuario::getPassword()
{
    return this->m_password;
}
