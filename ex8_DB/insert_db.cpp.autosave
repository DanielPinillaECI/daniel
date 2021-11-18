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
   sql = "INSERT INTO usuario (Nombre, Apellido, user_name, password, documento, fecha_nac) "  \
         "VALUES ('Sergio','Caballero','CaBacZ','12345','2166035','2001-08-09'); " \
         "INSERT INTO usuario (Nombre, Apellido, user_name, password, documento, fecha_nac) "  \
         "VALUES ('Daniel','Pinilla','Danielnisk','daniel123,'2166044','2001-10-16'); " \
     "INSERT INTO usuario (Nombre, Apellido, user_name, password, documento, fecha_nac) "  \
         "VALUES ('Carlos','Medrano','medrano01','Sopo5','2155011','2003-04-22'); " \
     "INSERT INTO usuario (Nombre, Apellido, user_name, password, documento, fecha_nac) "  \
         "VALUES ('Juan','Rivera','jumora51','electro12','2177023','2001-12-18'); " ;

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
