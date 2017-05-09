#ifndef SQLITE_H
#define SQLITE_H

#include <stdio.h>

#include "iostream"
#include "sstream"

#include <sqlite3.h>
#include <ctime>
#include "commons.h"

using namespace std;

class Sqlite
{
protected:
    sqlite3 *db;

    string path_database;
    string password;

    int status_db;
    char *error_query;
    const char* data;

    //! Print the data result from query in database
    static int callback(void *NotUsed, int argc, char **argv, char **azColName);

public:
    Sqlite();

    //! This method open the connection with the database
    void open();

    //! This metohd close the connection with the database
    void close();
};

#endif // SQLITE_H
