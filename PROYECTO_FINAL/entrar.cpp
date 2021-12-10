#include "entrar.h"
#include "ui_entrar.h"
#include "datos_usuario.h"
#include "ui_datos_usuario.h"
#include "muestra_datos.h"
#include "ui_muestra_datos.h"
#include "QDebug"
#include "QMessageBox"

ENTRAR::ENTRAR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ENTRAR)
{
    ui->setupUi(this);
}

ENTRAR::~ENTRAR()
{
    delete ui;
}

void ENTRAR::on_CONECTARSE2_clicked()
{
    QString nombre_usuario=ui->USUARIO_2->text();
    QString contra=ui->CONTRA_2->text();
    QSqlQuery buscar;
    QString contrasena;
    QString consulta;
    QString usuario;
    consulta.append("SELECT * FROM USUARIOS_DATABASE where id_usuario='"+nombre_usuario+"'");
    buscar.prepare(consulta);
    if(buscar.exec())
    {
        qDebug()<<"consulta realizada";
        while(buscar.next())
        {
            contrasena=buscar.value(2).toByteArray().constData();
            usuario=buscar.value(1).toByteArray().constData();
            qDebug()<<contrasena;
            qDebug()<<usuario;
        }
    }
    else
    {
        qDebug()<<"Error de consulta";
        QMessageBox::critical(this,tr("ERROR"),tr("Usuario no existente, cree uno"));

    }
    if(contrasena==contra && usuario==nombre_usuario)
    {
        MUESTRA_DATOS * muestra_datos= new MUESTRA_DATOS(0);
        muestra_datos->show();
        QMessageBox::information(this,tr("Bienvenido"),tr("Bienvenido"));
        this -> close();
    }
    else
    {
        QMessageBox::critical(this,tr("ERROR"),tr("Usuario no econtrado"));
        DATOS_USUARIO *datos_usuario = new DATOS_USUARIO(0);
        datos_usuario->show();
    }
}

void ENTRAR::on_REGISTRARSE3_clicked()
{
    DATOS_USUARIO *datos_usuario = new DATOS_USUARIO(0);
    datos_usuario->show();
}
