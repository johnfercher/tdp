#ifndef SQLITE_H
#define SQLITE_H

#include <stdio.h>
#include <stdlib.h>

#include "iostream"
#include "sstream"

#include <sqlite3.h>
#include "commons.h"

class Sqlite
{
protected:
    sqlite3 *db;

    std::string path_database;
    std::string password;

    int status_db;
    char *error_query;
    const char* data;

    //! Print the data result from query in database
    static int callback(void *NotUsed, int argc, char **argv, char **azColName);
    static int callback_list_owners(void *NotUsed, int argc, char **argv, char **azColName);
    static int callback_list_birds(void *NotUsed, int argc, char **argv, char **azColName);
    static int callback_list_competition(void *NotUsed, int argc, char **argv, char **azColName);

public:
    Sqlite();

    //! This method open the connection with the database
    void open();

    //! This metohd close the connection with the database
    void close();


    void addOwner(Owner owner);

    void updateOwner(Owner owner);

    void deleteOwner(Owner owner);

    std::vector<Owner> listOwners();

    std::vector<Owner> listOwnersWhichHas(int race);


    void addBird(Bird, Owner);

    void updateBird(Bird);

    void deleteBird(Bird);

    void deleteBirds(Owner);

    std::vector<Bird> listBirds(int race, int id_owner = 0);


    void addCompetition(Competition competition);

    std::vector<Competition> listCompetition();
};

#endif // SQLITE_H
