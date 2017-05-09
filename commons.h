#ifndef COMMONS_H
#define COMMONS_H

#include "iostream"

struct BirdData{
    std::string owner;
    std::string name;
    std::string race;
    std::string washer;
    std::string CTF;

    BirdData(){
        owner = "";
        name = "";
        race = "";
        washer = "";
        CTF = "";
    };

    BirdData(std::string owner, std::string name, std::string race, std::string washer, std::string CTF){
        this->owner = owner;
        this->name = name;
        this->race = race;
        this->washer = washer;
        this->CTF = CTF;
    };

    BirdData(BirdData *bd){
        owner = bd->owner;
        name = bd->name;
        race = bd->race;
        washer = bd->washer;
        CTF = bd->washer;
    };

    void debug(){
        std::cout << "Owner: " << owner << ", Name: " << name << ", Race:" << race << ", Washer: " << washer << ", CTF: " << CTF << std::endl;
    }
};

#endif // COMMONS_H
