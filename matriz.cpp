#include <iostream>
#include <ctime>
#define TAM 12

using namespace std;

void preencherMatriz(int Mat[][TAM]){
    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            Mat[i][j] = rand() % 9 + 1;
        }
    }
}

void imprimirMat(int Mat[][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            cout << Mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void somar(int Mat[][TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        for(int j = i + 1; j < TAM; j++){
                soma += Mat[i][j];
        }
    }
    cout << soma;
}

void media(int Mat[][TAM]){
    int media = 0, cont = 0;
    for(int i = 1; i < TAM; i++){
        for(int j = i - 1; j < i; j++){
            media += Mat[i][j];
            cont++;
        }
    }
    media /= cont;
    cout << media;
}

int main()
{
    int Mat[TAM][TAM];
    preencherMatriz(Mat);
    imprimirMat(Mat);
    cout << "A soma dos valores acima da diagonal principal e: ";
    somar(Mat);
    cout << endl;
    cout << "A media dos valores abaixo da diagonal principal e: ";
    media(Mat);
    cout << endl;

    return 0;
}