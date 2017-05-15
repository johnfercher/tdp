#ifndef COMMONS_H
#define COMMONS_H

#include "iostream"
#include "vector"

enum{ UNKNONW = -1, BICUDO_F = 0, CURIO_F = 1, CHANCHAO_F = 2, COLEIRO = 3, TRINCA_FERRO = 4, CURIO_L = 5 };

struct Bird{
    int id;
    std::string name;
    int race;
    std::string washer;
    int id_owner;

    Bird(){
        id = -1;
        name = "";
        race = UNKNONW;
        washer = "";
        id_owner = -1;
    };

    Bird(int id, std::string name, int race, std::string washer, int id_owner){
        this->id = id;
        this->name = name;
        this->race = race;
        this->washer = washer;
        this->id_owner = id_owner;
    };

    Bird(Bird *bd){
        id = bd->id;
        name = bd->name;
        race = bd->race;
        washer = bd->washer;
        id_owner = bd->id_owner;
    };

    void debug(){
        std::cout << "Id:" << id << ", Name: " << name << ", Race:" << race << ", Washer: " << washer << ", Id_Owner: " << id_owner << std::endl;
    }
};

struct Owner{
    int id;
    std::string name;
    std::vector<Bird> bicudos;
    std::vector<Bird> curiofs;
    std::vector<Bird> trincas;
    std::vector<Bird> chanchaos;
    std::vector<Bird> coleiros;
    std::vector<Bird> curiols;
    std::string cpf;
    std::string ctf;

    Owner(){
        id = -1;
        name = "John Doe";
        ctf = "";
        cpf = "";
    };

    Owner(int id, std::string name){
        this->id = id;
        this->name = name;
    };

    Owner(int id, std::string name, std::string cpf, std::string ctf){
        this->id = id;
        this->name = name;
        this->ctf = ctf;
        this->cpf = cpf;
    };

    Owner(Owner *o){
        id = o->id;
        name = o->name;
        ctf = o->ctf;
        cpf = o->cpf;
        bicudos = o->bicudos;
    };

    void debug(){
        std::cout << "Id: " << id << ", Name: " << name << ", CTF: " << ctf << ", CPF: " << cpf << std::endl;
        std::cout << "Passaros: " << std::endl;
        for(unsigned int i = 0 ; i < bicudos.size() ; i++){
            bicudos.at(i).debug();
        }
    }
};

struct Competition{
    int id;
    std::string date;
    int qtd_bicudo;
    int qtd_curiof;
    int qtd_curiol;
    int qtd_coleiro;
    int qtd_chanchao;
    int qtd_trinca;
    std::vector<Bird> bicudos;
    std::vector<Bird> curiofs;
    std::vector<Bird> trincas;
    std::vector<Bird> chanchaos;
    std::vector<Bird> coleiros;
    std::vector<Bird> curiols;

    Competition(){
        id = -1;
        date = "00-jan-0000";
        qtd_bicudo = qtd_curiof = qtd_curiol = qtd_coleiro = qtd_chanchao = qtd_trinca = -1;
    };

    Competition(int id, std::string date, int qtd_bicudo, int qtd_curiof, int qtd_curiol, int qtd_coleiro, int qtd_chanchao, int qtd_trinca){
        this->id = id;
        this->date = date;
        this->qtd_bicudo = qtd_bicudo;
        this->qtd_curiof = qtd_curiof;
        this->qtd_curiol = qtd_curiol;
        this->qtd_coleiro = qtd_coleiro;
        this->qtd_chanchao = qtd_chanchao;
        this->qtd_trinca = qtd_trinca;
    };

    Competition(Competition *c){
        id = c->id;
        date = c->date;
        qtd_bicudo = c->qtd_bicudo;
        qtd_curiof = c->qtd_curiof;
        qtd_curiol = c->qtd_curiol;
        qtd_coleiro = c->qtd_coleiro;
        qtd_chanchao = c->qtd_chanchao;
        qtd_trinca = c->qtd_trinca;
        bicudos = c->bicudos;
        curiofs = c->curiofs;
        curiols = c->curiols;
        coleiros = c->coleiros;
        chanchaos = c->chanchaos;
        trincas = c->trincas;
    };

    void debug(){
        std::cout << "Id: " << id << ", Date: " << date << ", Qtd_bicudo: " << qtd_bicudo << ", Qtd_curiof: " << qtd_curiof << ", Qtd_curiol: " << qtd_curiol << ", Qtd_coleiro: " << qtd_coleiro << ", Qtd_chanchao: " << qtd_chanchao << ", Qtd_trinca: " << qtd_trinca << std::endl;
    };
};

#endif // COMMONS_H
