#ifndef Rato_h
#define Rato_h

#include <iostream>
#include <string>
#include "Mapa.h"
using namespace std;

const char CIMA = 'C';
const char BAIXO = 'B';
const char DIREITA = 'D';
const char ESQUERDA = 'E';

struct Rato{
    int posX;
    int posY;
    bool temQueijo = false;
    char deOndeVeio;
};

Rato criarRato(int mapaEscolhido){
    Rato ratinho;

    if(mapaEscolhido == 1){
        ratinho.posX = 0;
        ratinho.posX = 0;
        ratinho.temQueijo = false;
    }else{
        ratinho.posX = 0;
        ratinho.posX = 0;
        ratinho.temQueijo = false;
    }
    
    return ratinho;
}

bool pegarQueijo(Rato ratinho, Mapa mapaSelecionado, int x, int y, char deOndeVeio){

    if(ratinho.temQueijo == true && x == 0 && y == 0){
        return true;
    }else if(mapaSelecionado.cenario[x][y] == QUEIJO){
        ratinho.temQueijo = true;
        return true;
    }else if(mapaSelecionado.cenario[x][y] == PAREDE){
        return false;
    }else if(x > 5 || x < 0 || y > 5 || y < 0){
        return false;
    }else{

        mapaSelecionado.cenario[x][y] = RATO;
        mostrarMapa(mapaSelecionado, 1);

        if((deOndeVeio != CIMA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x-1, y, BAIXO)){
            cout << "Rato subiu e se encontra na posição [" << x << "][" << y << "]" << endl;
            return true;
        }else if((deOndeVeio != BAIXO) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x+1, y, CIMA)){
            cout << "Rato desceu e se encontra na posição [" << x << "][" << y << "]" << endl;
            return true;
        }else if((deOndeVeio != ESQUERDA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y-1, DIREITA)){
            cout << "Rato avançou para esquerda e se encontra na posição [" << x << "][" << y << "]" << endl;
            return true;
        }else if((deOndeVeio != DIREITA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y+1, ESQUERDA)){
            cout << "Rato avançou para direita se encontra na posição [" << x << "][" << y << "]" << endl;
            return true;
        }else{
            cout << "impossivel encontrar o queijo!!" << endl;
            return false;
        }

    }
}

#endif
