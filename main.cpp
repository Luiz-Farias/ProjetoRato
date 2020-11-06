#include <iostream>
#include "Mapa.h"
#include "Rato.h"

using namespace std;


int main(){
    int escolhaMapa = escolherMapa(escolhaMapa);
    Mapa mapaSelecionado;
    Rato ratinho;
    mostrarMapa(mapaSelecionado, escolhaMapa);
    pegarQueijo(ratinho, mapaSelecionado, 0, 0, ratinho.deOndeVeio, escolhaMapa);

    return 0;
}
