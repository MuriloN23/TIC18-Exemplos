#include <iostream>
#include <string>

using namespace std;

class Animal {

    protected:
        string nome;
        int idade;

    public:



    Animal (string _nome, int _idade){
        nome = _nome;
        idade = _idade;
    }
    void fazersom();
    
};



class Cachorro: public Animal{
    public:
    void fazersom (){
        cout << "Au Au";

    }
    protected:

};