#ifndef Mapa_h
#define Mapa_h

#include <iostream>
using namespace std;

const char RATO = 'R';
const char PAREDE = 'P';
const char VAZIO = 'V';
const char QUEIJO = 'Q';

struct Mapa{
    char cenario[5][5];
};


Mapa criarMapa(int escolha){
    Mapa mapaEscolhido;

    if(escolha == 1){
        mapaEscolhido.cenario[5][5] = 
        {
        RATO 
        };
    }else if(escolha == 2){
        mapaEscolhido.cenario[5][5] = {
        RATO,   PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, PAREDE,  VAZIO,  VAZIO,  VAZIO,
        PAREDE, VAZIO,   VAZIO,  VAZIO,  QUEIJO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO,
        VAZIO,  VAZIO,   VAZIO,  VAZIO,  VAZIO
    };
    }
    
return mapaEscolhido;
}

void mostrarMapa(Mapa umMapa){
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cout <<umMapa.cenario[i][j] << "\t";
        }
        cout << endl;
    }
}

#endif
