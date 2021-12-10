#ifndef INICIO_H
#define INICIO_H
#include "datos_usuario.h"
#include <QMainWindow>
#include "QtSql/QSqlDatabase"
#include "QtSql/qsqlquery.h"
#include "QtSql/QSqlError"
#include "QtSql/QSqlQuery"

#include <QWidget>


namespace Ui {
class INICIO;
}

class INICIO : public QMainWindow
{
    Q_OBJECT

public:
    explicit INICIO(QWidget *parent = nullptr);
    ~INICIO();

private slots:

    void on_REGISTRARSE_clicked();
    void on_CONECTARSE_clicked();

private:
    Ui::INICIO *ui;
   QSqlDatabase dbmain;
};

#endif // INICIO_H
