#if !defined(RESTAURANT_HPP)
#define RESTAURANT_HPP
#include "../src/Necopiabil.cpp"
#include "Meniu.hpp"
#include<iostream>
#include<list>
#include<string>

using namespace meniu;

namespace restaurant{
    class Restaurant: private Necopiabil{

        public:
            Restaurant();//constructor default
            //este de preferat sa nu folosim constructori 
            //default ci sa ii declaram noi
            //daca sunt default nu stim ce valori se vor da obiectelor create
            //constructor declarat        
            Restaurant(const int& i,const std::list<Meniu>& m,const int& ms);
            //deconstructorul
            ~Restaurant();
            void printMeniu();
            int getNrMese();
        private:
            int id;
            std::list<Meniu> meniuri;
            int mese;
    
    };
    //facem o referinta pentru un Restaurant
    Restaurant& resRef();
};

#endif //END OF RESTAURANT_HPP