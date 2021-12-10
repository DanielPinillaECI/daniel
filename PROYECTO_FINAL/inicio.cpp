#include "inicio.h"
#include "./ui_inicio.h"
#include "datos_usuario.h"
#include "entrar.h"
#include "QDebug"


INICIO::INICIO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::INICIO)
{
    ui->setupUi(this);
    QString nombre;
    nombre="base_datos.sql";
    dbmain=QSqlDatabase::addDatabase("QSQLITE");
    dbmain.setDatabaseName(nombre);
    if(dbmain.open())
    {
        qDebug()<<"Exito en conexión con base de datos";
    }
    else
    {
        qDebug()<<"Error";
    }
}

INICIO::~INICIO()
{
    delete ui;
}

//* aqui llamamos a la interfaz de registro cuando se da click*//
void INICIO::on_REGISTRARSE_clicked()
{
    DATOS_USUARIO *datos_usuario = new DATOS_USUARIO(0);
    datos_usuario->show();
    this->close();
}

//* aqui llamamos a la interfaz de entrar cuando se da click*//
void INICIO::on_CONECTARSE_clicked()
{
    ENTRAR *entrar = new ENTRAR(0);
    entrar->show();
    this->close();
}
