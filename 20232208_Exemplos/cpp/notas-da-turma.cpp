#include <iostream>

using namespace std;

int main() {
int nota = 0, contador = 1, somanota=0, totaldealunos=10;
while (contador<=totaldealunos) {
cout << "Digite a nota do aluno "<<contador <<endl;
cin >> nota;
somanota = somanota+nota;
contador++;
}
cout << "A média das notas dos alunos é: "<<somanota/totaldealunos<<endl;


    return 0;
}