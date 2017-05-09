#ifndef COMMONS_H
#define COMMONS_H

#include "iostream"
#include "vector"

struct Bird{
    int id;
    std::string name;
    std::string race;
    std::string washer;
    std::string CTF;

    Bird(){
        id = -1;
        name = "";
        race = "";
        washer = "";
        CTF = "";
    };

    Bird(int id, std::string name, std::string race, std::string washer, std::string CTF){
        this->id = id;
        this->name = name;
        this->race = race;
        this->washer = washer;
        this->CTF = CTF;
    };

    Bird(Bird *bd){
        id = bd->id;
        name = bd->name;
        race = bd->race;
        washer = bd->washer;
        CTF = bd->washer;
    };

    void debug(){
        std::cout << "Id:" << id << ", Name: " << name << ", Race:" << race << ", Washer: " << washer << ", CTF: " << CTF << std::endl;
    }
};

struct Owner{
    int id;
    std::string name;
    std::vector<Bird*> birds;

    Owner(){
        id = -1;
        name = "John Doe";
    };

    Owner(int id, std::string name, std::vector<Bird*> birds){
        this->id = id;
        this->name = name;
        this->birds = birds;
    };

    Owner(Owner *o){
        id = o->id;
        name = o->name;
        birds = o->birds;
    };

    void debug(){
        std::cout << "Id: " << id << ", Name: " << name << std::endl;
        std::cout << "Passaros: " << std::endl;
        for(int i = 0 ; i < birds.size() ; i++){
            birds.at(i)->debug();
        }
    }
};

struct Competition{
    int id;
    std::string date;
    std::vector<Bird*> birds;
    std::vector<int> numbers;
    std::vector<float> qualifys_1;
    std::vector<float> qualifys_2;

    Competition(){
        id = -1;
        date = "00-00-0000";
    };

    Competition(int id, std::string date, std::vector<Bird*> birds, std::vector<int> numbers, std::vector<float> qualifys_1, std::vector<float> qualifys_2){
        this->id = id;
        this->date = date;
        this->birds = birds;
        this->numbers = numbers;
        this->qualifys_1 = qualifys_1;
        this->qualifys_2 = qualifys_2;
    };

    Competition(Competition *c){
        id = c->id;
        date = c->date;
        birds = c->birds;
        numbers = c->numbers;
        qualifys_1 = c->qualifys_1;
        qualifys_2 = c->qualifys_2;
    };

    void debug(){
        std::cout << "Id: " << id << ", Date: " << date << std::endl;
        std::cout << "Results:" << std::endl;
        for(int i = 0 ; i < birds.size() ; i++){
            birds.at(i)->debug();
            std::cout << numbers.at(i) << std::endl;
            std::cout << qualifys_1.at(i) << std::endl;
            std::cout << qualifys_2.at(i) << std::endl;
            std::cout << std::endl;
        }
    };
};

#endif // COMMONS_H
