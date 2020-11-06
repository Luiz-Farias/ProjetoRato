#ifndef Mapa_h
#define Mapa_h

#include <iostream>
#include <string>
using namespace std;

const char RATO = 'R';
const char PAREDE = 'P';
const char VAZIO = 'V';
const char QUEIJO = 'Q';
const char ENTRADA = 'E';

struct Mapa{
    char cenario[5][5] = 
    { 
        ENTRADA,PAREDE,  PAREDE, VAZIO,  VAZIO,
        VAZIO,  PAREDE,  PAREDE, VAZIO,  VAZIO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  QUEIJO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO
    };

    char cenarioErro[5][5] =
    {
        ENTRADA,PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, VAZIO,   VAZIO,  VAZIO,  QUEIJO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO
    };
};

int escolherMapa(int escolhaMapa){
    cout << "Escolha um mapa: " << endl << endl
    <<"Opcao [1]" << endl <<endl
    <<"ENTRADA,PAREDE,  PAREDE, VAZIO,  VAZIO," << endl 
    <<"VAZIO,  PAREDE,  PAREDE, VAZIO,  VAZIO," << endl 
    <<"VAZIO,  VAZIO,   VAZIO,  VAZIO,  QUEIJO," << endl
    <<"VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO," << endl
    <<"VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO," << endl 
    << endl
    <<"Opcao [2]" << endl << endl
    <<"ENTRADA,   PAREDE,  VAZIO,  VAZIO,  VAZIO," << endl 
    <<"PAREDE, PAREDE,  VAZIO,  VAZIO,  VAZIO," << endl 
    <<"PAREDE, VAZIO,   VAZIO,  VAZIO,  QUEIJO," << endl
    <<"VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO," << endl
    <<"VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO," << endl
    << endl; 
    cout << "Opcao escolhida: "; cin >> escolhaMapa; 
    

    return escolhaMapa;
}

Mapa criarMapa(){
        Mapa mapa;
        return mapa;
}

void mostrarMapa(Mapa umMapa, int escolhaMapa){
    if (escolhaMapa == 1){
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                cout <<umMapa.cenario[i][j] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }else if (escolhaMapa == 2){
        for (int i=0; i<5; i++) {
            for (int j=0; j<5; j++) {
                cout <<umMapa.cenarioErro[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

#endif
