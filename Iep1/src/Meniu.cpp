#include <iostream>
#include <list>
#include <string>
#include "../inc/Meniu.hpp"
#include "../inc/Restaurant.hpp"

namespace meniu {
    Meniu::Meniu(const std::string& n, const int& p):
    nume(n),
    pret(p)
    {};
    void Meniu::getInfo(){
        std::cout<<"Meniul "<<this->nume<<" are pretul: "<<this->pret<<"\n";
    };
    int Meniu::getPret(){
        return this->pret;
    };
    std::string Meniu::getNume(){
        return this->nume;
    };
    //aici in loc sa ne referim la obiect, facem un call la functia de referinta
    //asa aflam numarul de mese din restaurantul de baza in caz ca dorim sa stim cate
    //meniuri sa punem pe ficare masa
    int Meniu::getMese(){
        int nr = restaurant::resRef().getNrMese();
        return nr;
    }
};
