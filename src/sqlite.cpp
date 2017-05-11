#include "sqlite.h"

std::vector<Owner> _owners;
std::vector<Bird> _birds;

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
    //for(i=0; i<argc; i++){
     //printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    //}
    //printf("\n");
    return 0;
}

int Sqlite::callback_list_owners(void *NotUsed, int argc, char **argv, char **azColName){
    //! > Print the info like on the table in database
    for(int i = 0; i < argc; i = i+4){
        _owners.push_back(Owner(
                              atoi(argv[i]), std::string(argv[i+1]), std::string(argv[i+2]), std::string(argv[i+3])
                              )
                          );
    }

    return 0;
}

int Sqlite::callback_list_bicudos(void *NotUsed, int argc, char **argv, char **azColName){
    for(int i = 0; i < argc; i = i+5){
        _birds.push_back(Bird(
                              atoi(argv[i]), std::string(argv[i+1]), atoi(argv[i+2]), std::string(argv[i+3])
                              )
                          );
    }

    return 0;
}

void Sqlite::addOwner(Owner owner){
    std::stringstream query;

    query << "INSERT INTO Owner (name, ctf, cpf)";
    query << " VALUES (";
        query << "'" << owner.name << "',";
        query << "'" << owner.ctf << "',";
        query << "'" << owner.cpf << "'";
    query << ");";

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();
}

void Sqlite::updateOwner(Owner owner){
    std::stringstream query;

    query << "UPDATE Owner SET ";
        query << "name = '" << owner.name << "',";
        query << "ctf = '" << owner.ctf << "',";
        query << "cpf = '" << owner.cpf << "'";
    query << "WHERE id = '" << owner.id << "'";

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();
}

void Sqlite::deleteOwner(Owner owner){
    std::stringstream query;

    query << "DELETE FROM Owner";
    query << " WHERE id=";
        query << "'" << owner.id << "'";
    query << ";";

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();
}

std::vector<Owner> Sqlite::listOwners(){
    std::stringstream query;
    _owners.clear();

    query << "SELECT * FROM Owner";

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback_list_owners, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();

    for(unsigned int i = 0 ; i < _owners.size() ; i++){
        _owners.at(i).bicudos = listBirds(BICUDO_F, _owners.at(i).id);
        _owners.at(i).curiofs = listBirds(CURIO_F, _owners.at(i).id);
        _owners.at(i).curiols = listBirds(CURIO_L, _owners.at(i).id);
        _owners.at(i).trincas = listBirds(TRINCA_FERRO, _owners.at(i).id);
        _owners.at(i).coleiros = listBirds(COLEIRO, _owners.at(i).id);
        _owners.at(i).chanchaos = listBirds(CHANCHAO_F, _owners.at(i).id);
    }

    return _owners;
}

void Sqlite::addBird(Bird bird, Owner owner){
    std::stringstream query;

    query << "INSERT INTO Bird (name, race, washer, id_owner)";
    query << " VALUES (";
        query << "'" << bird.name << "',";
        query << "'" << bird.race << "',";
        query << "'" << bird.washer << "',";
        query << "'" << owner.id << "'";
    query << ");";

    //std::cout << query.str() << std::endl;

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();
}

std::vector<Bird> Sqlite::listBirds(int race, int id_owner){
    std::stringstream query;
    _birds.clear();

    if(id_owner == 0)
        query << "SELECT * FROM Bird where race='" << race << "';";
    else
        query << "SELECT * FROM Bird where race='" << race << "' AND id_owner='" << id_owner << "';";

    //std::cout << query.str() << std::endl;

    open();
        status_db = sqlite3_exec(db, query.str().c_str(), callback_list_bicudos, 0, &error_query);
        if(status_db != SQLITE_OK){
            fprintf(stderr, "SQL error: %s\n", error_query);
            sqlite3_free(error_query);
        }
    close();

    return _birds;
}


