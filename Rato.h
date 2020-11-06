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


bool pegarQueijo(Rato ratinho, Mapa mapaSelecionado, int x, int y, char deOndeVeio, int escolhaMapa){

    if (escolhaMapa == 1){    
        if(ratinho.temQueijo == true && x == 0 && y == 0){
            return true;

        }else if(mapaSelecionado.cenario[x][y] == QUEIJO){
            mapaSelecionado.cenario[x][y] = RATO;
            mapaSelecionado.cenario[0][0] = ENTRADA;
            cout << "O Rato encontrou o queijo" << endl;
            mostrarMapa(mapaSelecionado, escolhaMapa);
            ratinho.temQueijo = true;
            return true;

        }else if(mapaSelecionado.cenario[x][y] == PAREDE){
            return false;

        }else if(x > 4 || x < 0 || y > 4 || y < 0){
            return false;

        }else{
            mapaSelecionado.cenario[x][y] = RATO;
            if(x != 0 || y != 0)
                cout << "O Rato se moveu e se encontra na posicao [" << x << "][" << y << "]" << endl;
            mostrarMapa(mapaSelecionado, escolhaMapa);

            if((deOndeVeio != BAIXO) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x+1, y, CIMA, escolhaMapa)){
                return true;

            }else if((deOndeVeio != DIREITA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y+1, ESQUERDA, escolhaMapa)){
                return true;

            }else if((deOndeVeio != CIMA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x-1, y, BAIXO, escolhaMapa)){
                return true;

            }else if((deOndeVeio != ESQUERDA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y-1, DIREITA, escolhaMapa)){
                return true;

            }else{

                cout << "impossivel chegar ao queijo!" << endl;
                return false;
            }

        }
    }else{

        if(ratinho.temQueijo == true && x == 0 && y == 0){
            return true;

        }else if(mapaSelecionado.cenarioErro[x][y] == QUEIJO){
            mapaSelecionado.cenarioErro[x][y] = VAZIO;
            mapaSelecionado.cenarioErro[0][0] = ENTRADA;
            cout << "O Rato encontrou o queijo" << endl;
            mostrarMapa(mapaSelecionado, escolhaMapa);
            ratinho.temQueijo = true;
            return true;

        }else if(mapaSelecionado.cenarioErro[x][y] == PAREDE){
            return false;

        }else if(x > 4 || x < 0 || y > 4 || y < 0){
            return false;

        }else{

            mapaSelecionado.cenarioErro[x][y] = RATO;
            if(x != 0 || y != 0)
                cout << "O Rato se moveu e se encontra na posicao [" << x << "][" << y << "]" << endl;
            mostrarMapa(mapaSelecionado, escolhaMapa);

            if((deOndeVeio != BAIXO) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x+1, y, CIMA, escolhaMapa)){
                return true;

            }else if((deOndeVeio != DIREITA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y+1, ESQUERDA, escolhaMapa)){
                return true;

            }else if((deOndeVeio != CIMA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x-1, y, BAIXO, escolhaMapa)){
                return true;

            }else if((deOndeVeio != ESQUERDA) && ratinho.temQueijo == false && pegarQueijo(ratinho, mapaSelecionado, x, y-1, DIREITA, escolhaMapa)){
                return true;

            }else{
                cout << "impossivel chegar ao queijo!" << endl;
                return false;
            }

        }
    }
}

#endif
