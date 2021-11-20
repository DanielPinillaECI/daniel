#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   string sqlstr;

   /* Open database */
   rc = sqlite3_open("test.db", &db);

   if( rc != 0 ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(1);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS usuario (id_usuario INTEGER PRIMARY KEY NOT NULL," \
      "Nombre TEXT NOT NULL, Apellido TEXT NOT NULL," \
      "Documento INTEGER NOT NULL, Fecha_nac TEXT NOT NULL," \
      "user_name TEXT NOT NULL, passwd TEXT NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (2);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS sensor (id_medida INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura REAL NOT NULL, Humedad REAL NOT NULL," \
      "Velocidad REAL NOT NULL, Direccion REAL NOT NULL," \
      "Presipitacion REAL NOT NULL, int_luz REAL NOT NULL,"\
      "Fecha TEXT NOT NULL );";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (3);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS promedio (id_promedio INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura_prom REAL NOT NULL, Humedad_prom REAL NOT NULL," \
      "Velocidad_prom REAL NOT NULL, Direccion_prom REAL NOT NULL," \
      "Presipitacion_prom REAL NOT NULL, int_luz_prom REAL NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (3);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS maximo (id_maximo INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura_max REAL NOT NULL, Humedad_max REAL NOT NULL," \
      "Velocidad_max REAL NOT NULL, Direccion_max REAL NOT NULL," \
      "Presipitacion_max REAL NOT NULL, int_luz_max REAL NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (3);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }

   /* Create SQL statement */
   sqlstr = "CREATE TABLE IF NOT EXISTS minimo (id_minimo INTEGER PRIMARY KEY NOT NULL," \
      "Temperatura_min REAL NOT NULL, Humedad_min REAL NOT NULL," \
      "Velocidad_min REAL NOT NULL, Direccion_min REAL NOT NULL," \
      "Presipitacion_min REAL NOT NULL, int_luz_min REAL NOT NULL);";

   /* Execute SQL statement */
   rc = sqlite3_exec(db, sqlstr.c_str(), 0, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      return (3);
   } else {
      fprintf(stdout, "Table created successfully\n");
   }


   sqlite3_close(db);
   return 0;
}
