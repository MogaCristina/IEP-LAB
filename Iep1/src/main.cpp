#include <iostream>
#include "../inc/Meniu.hpp"
#include "../inc/Restaurant.hpp"

int main(){
    meniu::Meniu m1("Burger",32);
    meniu::Meniu m2("Pizza",60);
    meniu::Meniu m3("Fries",10);
    std::cout<< m1.getMese()<<std::endl;

    std::list<Meniu> meniuri1;
    std::list<Meniu> meniuri2;

    meniuri1.push_back(m1);
    meniuri1.push_back(m2);

    meniuri2.push_back(m3);
    meniuri2.push_back(m1);

    std::cout << m1.getPret() << std::endl;
    m2.getInfo();

    restaurant::Restaurant r1(1,meniuri1,10);
    r1.printMeniu();
    restaurant::Restaurant r2(2,meniuri2,20);
    r2.printMeniu();

    //restaurant::Restaurant r3(3,meniuri1,5);
    //r3=r2; 
    //restaurant::Restaurant r3(r1);
    
    //aceasta incercare de a copia va da eroare la compilare
    //deoarece am folosit clasa Necopiabil pe care am mostenit-o in
    //clasa Restaurant
    //se va incerca copierea insa operatiile de copiere
    //sunt declarate ca fiind private in clasa Necopiabil
    return 0;
}