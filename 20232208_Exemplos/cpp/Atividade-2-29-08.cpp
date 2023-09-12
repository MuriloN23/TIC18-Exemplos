#include <iostream>

using namespace std;

int main(){
    double x, y, z, fx;
cout << "Digite o primeiro ponto x ";
    cin >> x; 
cout <<"Digite o segundo ponto y ";
    cin >> y;

fx = (5*x)+2;
cout << ((y < fx) ? "Lado Direito" :"" );
cout << ((y==fx) ? "Na Curva" : "");
cout << ((y > fx) ? "Lado Esquerdo" :"");

    return 0;

}