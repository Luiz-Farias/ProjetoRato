#include <iostream>
#include "Mapa.h"
#include "Rato.h"

using namespace std;


int main(){
    int escolhaMapa;
    Rato ratinho;

    escolhaMapa = escolherMapa(escolhaMapa);
    ratinho = criarRato(escolhaMapa);
    Mapa mapaSelecionado = criarMapa();
    mostrarMapa(mapaSelecionado, escolhaMapa);

    return 0;
}
