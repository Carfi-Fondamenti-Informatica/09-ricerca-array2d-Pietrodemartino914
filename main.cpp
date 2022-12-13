#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char lista [10][20];
    char nome [1][20];
    for (int i ; i<10;i++){     //spaziatura array bidimensionale
        for (int j = 0; j < 20; j++) {
            lista[i][j]=' ';
        }
    }
    for (int i = 0; i < 10; i++) { //inserimento array bidimensionale
        cin >> lista [i];
    }

    for (int i = 0; i < 20; i++) {  //spaziatura array monodimensionale
        nome[0][i]=' ';
    }
    cin>> nome[0]; //inserimento array monodimensionale




    if ( confronto(lista,nome)!=-1){
        cout<<confronto(lista,nome);
    }else {
        cout<< "non presente";
    }

    return 0;
}
