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

    Bird(){
        id = -1;
        name = "";
        race = UNKNONW;
        washer = "";
    };

    Bird(int id, std::string name, int race, std::string washer){
        this->id = id;
        this->name = name;
        this->race = race;
        this->washer = washer;
    };

    Bird(Bird *bd){
        id = bd->id;
        name = bd->name;
        race = bd->race;
        washer = bd->washer;
    };

    void debug(){
        std::cout << "Id:" << id << ", Name: " << name << ", Race:" << race << ", Washer: " << washer << std::endl;
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
    std::vector<Bird*> birds;
    std::vector<int> numbers;

    Competition(){
        id = -1;
        date = "00-00-0000";
    };

    Competition(int id, std::string date, std::vector<Bird*> birds, std::vector<int> numbers){
        this->id = id;
        this->date = date;
        this->birds = birds;
        this->numbers = numbers;
    };

    Competition(Competition *c){
        id = c->id;
        date = c->date;
        birds = c->birds;
        numbers = c->numbers;
    };

    void debug(){
        std::cout << "Id: " << id << ", Date: " << date << std::endl;
        std::cout << "Results:" << std::endl;
        for(unsigned int i = 0 ; i < birds.size() ; i++){
            birds.at(i)->debug();
            std::cout << numbers.at(i) << std::endl;
            std::cout << std::endl;
        }
    };
};

#endif // COMMONS_H
