#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Ponto {

    int x;
    int y;
};

double distancia( struct Ponto pontoA , struct Ponto pontoB) {
    return sqrt( pow(pontoA.x - pontoB.x,2) + pow(pontoA.y - pontoB.y, 2));
  };

  int main (){
Ponto pontoA, pontoB;

cout << "Entre com X e Y do primeiro ponto " << endl;
cin >> pontoA.x >> pontoA.y;
cout << "Entre com X e Y do segundo ponto " << endl;
cin >> pontoB.x >> pontoB.y;

cout << "distancia: " << distancia( pontoA, pontoB) << endl << endl;


  }