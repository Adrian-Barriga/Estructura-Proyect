#ifndef USUARIO_H
#define USUARIO_H
#include <QString>

class Usuario
{
public:
    //constructor
    Usuario(QString m_usuario,QString m_password);
    //set
    void setUsuario(QString m_usuario);
    void setPassword(QString m_password);
    //get
    QString getUsuario();
    QString getPassword();
private:
    QString m_usuario;
    QString m_password;
};

#endif // USUARIO_H
