//ejemplo funciones virtuales
#include <iostream>
using namespace std,

class base {
public:
    virtual void quien(){
        cout << "base\n";
    }
};

class primera: public base{
public:
    void quien(){
        cout << "primera\n";
    }
};

class segunda: public base{
public:
    void quien(){
        cout << "segunda\n";
    }
};

class tercera: public base{

};

class cuarta: public base{
public:
    //No se vale con un tipo de dato diferente
    /*int quien(){
        cout << "cuarto\n";
        return 1;
    }*/
}