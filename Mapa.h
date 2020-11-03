#ifndef Mapa_h
#define Mapa_h

#include <iostream>
using namespace std;

const char RATO = 'R';
const char PAREDE = 'P';
const char VAZIO = 'V';
const char QUEIJO = 'Q';

struct Mapa{
    char cenario[5][5] = 
    { 
        RATO,  PAREDE,  PAREDE, VAZIO,  VAZIO,
        VAZIO, PAREDE,  PAREDE, VAZIO,  VAZIO,
        VAZIO, VAZIO,   VAZIO,  VAZIO,  QUEIJO,
        VAZIO, VAZIO,   VAZIO,  VAZIO,  VAZIO,
        VAZIO, VAZIO,   VAZIO,  VAZIO,  VAZIO
    };

    char cenarioErro[5][5] =
    {
        RATO,   PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, VAZIO,   VAZIO,  VAZIO,  QUEIJO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO
    };
};

int escolherMapa(int escolhaMapa){
    cout << "escolha um mapa: ";
    cin >> escolhaMapa;

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
