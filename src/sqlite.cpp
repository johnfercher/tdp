#include "sqlite.h"
#include "QDir"
#include "QDebug"
Sqlite::Sqlite()
{
    path_database = "../db/database.db";
    password = "passwd";
}

//! Addendum
//! --------
//!
void Sqlite::open(){
    status_db = sqlite3_open(path_database.c_str(), &db);

    //! > Return any error, if something happen when try to open the database
    if(status_db){
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
}

void Sqlite::close(){
    sqlite3_close(db);
}

//! Addendum
//! --------
//!
int Sqlite::callback(void *NotUsed, int argc, char **argv, char **azColName){
    int i;

    //! > Print the info like on the table in database
    for(i=0; i<argc; i++){
     printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

void Sqlite::addOwner(Owner owner){
    std::stringstream query;

    query << "INSERT INTO Owner (name)";
    query << " VALUES (";
        query << "'" << owner.name << "'";
    query << ");";
    //qDebug() << QDir::currentPath();
    //std::cout << query.str() << std::endl;

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();
}
