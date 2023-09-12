#include <iostream>

using namespace std;

int main(){
    int nota;

    cout <<"Digite a nota (0-10): ";
    cin >> nota;

if (nota >= 0 && nota <=10) {

    switch (nota) {
        case 10:

        cout << "Conceito A" << endl;
        break;
        case 9:

        cout << "Conceito A" << endl;
        break;
        case 8:

        cout << "Conceito B" << endl;
        break;
        case 7:

        cout << "Conceito B" << endl;
        break;
        case 6:

        cout << "Conceito C" << endl;
        break;
        case 5:

        cout << "Conceito C" << endl;
        break;
        case 4:

        cout << "Conceito D" << endl;
        break;
        case 3:

        cout << "Conceito D" << endl;
        break;
        case 2:

        cout << "Conceito F" << endl;
        break;
        case 1:

        cout << "Conceito F" << endl;
        break;
        case 0:

        cout << "Conceito F, estude mais" << endl;
        break;
    }
}else {
        cout << "Nota invalida" <<endl;

}
return 0;

}