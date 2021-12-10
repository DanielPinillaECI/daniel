#include "datos_usuario.h"
#include "ui_datos_usuario.h"
//#include "registro.h"
//#include "ui_registro.h"
#include "entrar.h"
#include "ui_entrar.h"
#include "QDebug"
#include "QMessageBox"

DATOS_USUARIO::DATOS_USUARIO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DATOS_USUARIO)
{
    ui->setupUi(this);
    CrearTabla_2();
}

DATOS_USUARIO::~DATOS_USUARIO()
{
    delete ui;
}

void DATOS_USUARIO::CrearTabla_2()
{
    QString consulta;
    consulta.append("CREATE TABLE IF NOT EXISTS USUARIOS_DATABASE("
                    "nombre,"
                    "id_usuario,"
                    "contra,"
                    "confirm_contra,"
                    "apellido,"
                    "numero_id,"
                    "dia,"
                    "mes,"
                    "year"
                    ");");
    QSqlQuery crear;
    crear.prepare(consulta);
    if(crear.exec())
    {
        qDebug()<<"Tabla Creada";
    }else
    {
        qDebug()<<"Tabla no creada"<<crear.lastError();
    }
}

void DATOS_USUARIO::on_REGISTRARSE_clicked()
{
    QString nombre=ui->NOMBRE->text();
    QString apellido=ui->APELLIDO->text();
    QString numero_id=ui->IDENTIFI->text();
    QString dia=ui->DIA->text();
    QString mes=ui->MES->text();
    QString year=ui->YEAR->text();
    QString id_usuario=ui->ID_USUARIO->text();
    QString contra=ui->CONTRA->text();
    QString confirm_contra=ui->CONFI_CONTRA->text();
    qDebug()<<contra;
    qDebug()<<confirm_contra;
    qDebug()<<id_usuario;
    qDebug()<<nombre;
    qDebug()<<apellido;
    qDebug()<<numero_id;
    qDebug()<<dia;
    qDebug()<<mes;
    qDebug()<<year;
    QSqlQuery insert_db;
    if(1<=dia<=31 && 1<=mes<=12 && 1500<=year<=2021)
    {
        insert_db.prepare("INSERT INTO USUARIOS_DATABASE(nombre,apellido,numero_id,dia,mes,year,id_usuario,contra,confirm_contra)"
                        "VALUES (:nombre,:apellido,:numero_id,:dia,:mes,:year,:id_usuario,:contra,:confirm_contra)");
        insert_db.bindValue(":nombre",nombre);
        insert_db.bindValue(":apellido",apellido);
        insert_db.bindValue(":numero_id",numero_id);
        insert_db.bindValue(":dia",dia);
        insert_db.bindValue(":mes",mes);
        insert_db.bindValue(":year",year);
        insert_db.bindValue(":id_usuario",id_usuario);
        insert_db.bindValue(":contra",contra);
        insert_db.bindValue(":confirm_contra",confirm_contra);

        if(insert_db.exec())
        {
            qDebug()<<"Datos ingresados con exito";
            QMessageBox::information(this,tr("Exito"),tr("Registro Exitoso"));
            this -> close();
            ENTRAR *entrar = new ENTRAR(0);
            entrar->show();
        }
        else
        {
            qDebug()<<"Error"<<insert_db.lastError();
            QMessageBox::critical (this,tr("ERROR"),tr("Error"));
        }
    }
    else
    {
        qDebug()<<"Error al ingresar los datos"<<insert_db.lastError();
        QMessageBox::critical (this,tr("ERROR"),tr("Verifique, Error en la fecha"));
    }
}

