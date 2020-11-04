#include<iostream>
#include<list>
#include<string>
#include "../inc/Restaurant.hpp"

using namespace meniu;
namespace restaurant{

    Restaurant::Restaurant(){
        std::cout << "Constructor default!" << std::endl;
    };
    //e mai recomandat sa folosim constructorul de mai jos
    //initializam astfel variabilele, doarece daca nu le initializam noi 
    //se poate sa fie initializate cu o valoare aleatoare si asta va determina 
    //un comportament neobisnuit
    Restaurant::Restaurant(const int& i,const std::list<Meniu>& m,const int& ms):
    id(i),
    meniuri(m),
    mese(ms)
    {};//empty body
    Restaurant::~Restaurant(){
        std::cout << "Deconstructor pentru restaurantul cu id-ul "<< this->id << std::endl;
    };
    //deconstructorul e folosit sa stearga obiectele care nu mai sunt folosite
    void Restaurant::printMeniu(){
        const int length = this->meniuri.size();
        for(std::list<Meniu> ::iterator it = meniuri.begin(); it!= meniuri.end(); ++it){
            Meniu m = *it;
            m.getInfo();
        };
        std::cout << "\n";
    };
    int Restaurant::getNrMese(){
        return this->mese;
    }
    //pentru a evita probleme de initializare, daca dorim sa folosim un obict de tip 
    //Restaurant in clasa Meniu, dar putem risca sa nu fi initilizat inainte
    //inlocuim obiectul astfel:
    Restaurant& resRef(){
        static Restaurant rs(0,{},12);//definim si initializam un obiect static local
        //id-ul rstaurantului 0, lista de meniuri goala, locuri 12
        //numarul de locuri e important-> asta ne intereseaza in clasa Meniu
        return rs;//aici returnam o referinta la acest obiect
    };
};
