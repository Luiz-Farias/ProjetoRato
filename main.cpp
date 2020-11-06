#include <iostream>
#include "Mapa.h"
#include "Rato.h"

using namespace std;


int main(){
    int escolhaMapa;
    string msg;

    escolhaMapa = escolherMapa(escolhaMapa);
    Rato ratinho = criarRato(escolhaMapa);
    Mapa mapaSelecionado = criarMapa();
    mostrarMapa(mapaSelecionado, escolhaMapa);
    pegarQueijo(ratinho, mapaSelecionado, 0, 0, ratinho.deOndeVeio);

    return 0;
}
