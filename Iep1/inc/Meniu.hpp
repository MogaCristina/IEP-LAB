#if !defined(MENIU_HPP)
#define MENIU_HPP
#include<iostream>
#include<list>
#include<string>

namespace meniu{
    class Meniu {
        public:
            Meniu(const std::string& n, const int& p);
            int getPret();
            void getInfo();
            int getMese();
            std::string getNume();
        private:
            std::string nume;
            int pret;
    };
}

#endif //end of MENIU_HPP