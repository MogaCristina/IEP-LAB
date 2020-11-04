class Necopiabil{
    protected: 
        Necopiabil(){};//constructor
        ~Necopiabil(){};//deconstructor
    private:
        //aici prevenim copierea
        Necopiabil(const Necopiabil&);
        Necopiabil& operator=(const Necopiabil&);
};