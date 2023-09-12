#include <iostream>
#include <time.h>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo){
    //cout << vetor<< endl; endereço da memória
    maximo = minimo = vetor[0];
    for (int i=0; i<n; i++){
        if(vetor[i] > maximo){ 
            maximo = vetor [i];
        }
        else{
            if(vetor[i] < minimo)
            minimo = vetor[i];
        }
        //cout << vetor[i] << endl;
    }
}

void print_vector(int vetorTeste[], int tamanhoVetor) {
    for (int i=0; i<tamanhoVetor; i++){
        cout << vetorTeste[i] <<",";
    }
}

int main(){
    int tamanhoVetor = 10;
    int maximo = 5;
    int minimo = 1;
    int vetorTeste[tamanhoVetor] = {0};

    srand(time(nullptr));

    for (int i=0; i<tamanhoVetor; i++){
        vetorTeste[i] = rand()%43;
    }

    maxmin (vetorTeste, tamanhoVetor,maximo,minimo);

    print_vector (vetorTeste, tamanhoVetor);

    cout << endl;
    cout << "Máximo " << maximo << endl;
    cout << "Minimo " << minimo << endl;

    return 0;
}




