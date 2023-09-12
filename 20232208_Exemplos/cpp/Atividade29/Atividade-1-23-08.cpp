#include <iostream>

using namespace std;

int main(){
    int a, b, c;
cout << "Digite o primeiro numero inteiro ";
    cin >> a; 
cout <<"Digite o segundo numero inteiro ";
    cin >> b;
    c = a+b;
    cout << "c: "<<c<<" Em Hexadecimal: "<< hex <<c<< endl;
    c = a*b;
    cout << "c: "<<c<<" Em Octal: "<< oct <<c<< endl;
    return 0;

}