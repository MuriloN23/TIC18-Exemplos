#include <iostream>
using namespace std;

int main (void) {
    cout << "Qual sua idade? ";
    int idade, idadenova;
    cin >> idade;
    cout << "Você tem " << idade << " anos.\n";

idadenova = idade+10;

 cout << "Sua idade em 2033 será:" << idadenova << " anos\n";
    return 0;
}