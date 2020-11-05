#ifndef Rato_h
#define Rato_h

#include <iostream>
#include <string>
using namespace std;

const char CIMA = 'C';
const char BAIXO = 'B';
const char DIREITA = 'D';
const char ESQUERDA = 'E';
const char NANDOU = 'N';

struct Rato{
    int posX;
    int posY;
    bool temQueijo;
    char deOndeVeio = NANDOU;
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

bool pegarQueijo(Rato ratinho){
    string msg;

    if(ratinho.posX < 0 || ratinho.posY > 5){
        return false;
    }else if(ratinho.posX < 0 || ratinho.posY > 5){
        return false;
    }else if(ratinho.posX == 1 && ratinho.posY == 0 || ratinho.posX == 2 && ratinho.posY == 0){
        return false;
    }else if(ratinho.posX == 1 && ratinho.posY == 1 || ratinho.posX == 2 && ratinho.posY == 1){
        return false;
    }else if(ratinho.temQueijo == true){
        return false;
    }

    cout << msg;

    if(ratinho.deOndeVeio == CIMA || ratinho.deOndeVeio == ESQUERDA || ratinho.deOndeVeio == DIREITA || ratinho.deOndeVeio == NANDOU){
        ratinho.posY = ratinho.posY + 1;
        msg = "O rato está na posição Y: " + ratinho.posX + "e X: " + ratinho.posX;
        pegarQueijo(ratinho);
    }
    
}

#endif
