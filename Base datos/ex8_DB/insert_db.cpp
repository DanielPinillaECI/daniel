#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>

using namespace std;


int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sql;

   /* Open database */
   rc = sqlite3_open("test.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO usuario (Nombre, Apellido, user_name, passwd, Documento, Fecha_nac) "  \
            "VALUES ('Sergio','Caballero','CaBacZ','12345','2166035','2001-08-09'); " \
            "INSERT INTO usuario (Nombre, Apellido, user_name, passwd, Documento, Fecha_nac) "  \
            "VALUES ('Daniel','Pinilla','Danielnisk','daniel123','2166044','2001-10-16'); " \
        "INSERT INTO usuario (Nombre, Apellido, user_name, passwd, Documento, Fecha_nac) "  \
            "VALUES ('Carlos','Medrano','medrano01','Sopo5','2155011','2003-04-22'); " \
        "INSERT INTO usuario (Nombre, Apellido, user_name, passwd, Documento, Fecha_nac) "  \
            "VALUES ('Juan','Rivera','jumora51','electro12','2177023','2001-12-18'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }

   /* Create SQL statement */
   sql = "INSERT INTO sensor (Temperatura, Humedad, Velocidad, Direccion, Presipitacion, int_luz, Fecha) "  \
         "VALUES ('37.8', '25', '31.2', '65.3', '20', '150.6', '2020-01-02'); " \
         "INSERT INTO sensor (Temperatura, Humedad, Velocidad, Direccion, Presipitacion, int_luz, Fecha) "  \
         "VALUES ('32.5', '10', '20.4', '60.2', '35', '182.3', '2021-08-18'); " \
     "INSERT INTO sensor (Temperatura, Humedad, Velocidad, Direccion, Presipitacion, int_luz, Fecha) "  \
         "VALUES ('22.8', '32.6', '30.5', '62.7', '42.1', '162.3', '2021-02-04'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }

   sql = "INSERT INTO promedio (Temperatura_prom, Humedad_prom, Velocidad_prom, Direccion_prom, Presipitacion_prom, int_luz_prom) "  \
         "VALUES ('31.03333333', '22.53333333', '27.36666667', '62.73333333', '32.36666667', '165.0666667'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }

   sql = "INSERT INTO maximo (Temperatura_max, Humedad_max, Velocidad_max, Direccion_max, Presipitacion_max, int_luz_max) "  \
         "VALUES ('37.8', '32.6', '31.2', '65.3', '42.1', '182.3'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }

   sql = "INSERT INTO minimo (Temperatura_min, Humedad_min, Velocidad_min, Direccion_min, Presipitacion_min, int_luz_min) "  \
         "VALUES ('22.8', '10', '20.4', '60.2', '20', '150.6'); " ;

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else {
      fprintf(stdout, "Records created successfully\n");
   }


   sqlite3_close(db);
   return 0;
}
