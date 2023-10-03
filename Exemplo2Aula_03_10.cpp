#include <iostream>
#include <string>
#include <vector>

using namespace std;


class  Estado{

    private:
    public:

string nome;
string sigla;  //UF
};

class Cidade {
    private:
    public:

string nome;
Estado *estado;

};

int mains (){

vector<Estado>ColecaoEstados;
vector<Cidade>ColecaoCidades;



    return 0;
}