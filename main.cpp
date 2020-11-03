#include <iostream>
#include "Mapa.h"
#include "Rato.h"

using namespace std;


int main(){
    int escolhaMapa;

    escolhaMapa = escolherMapa(escolhaMapa);
    

    Mapa mapaSelecionado = criarMapa();
    mostrarMapa(mapaSelecionado, escolhaMapa);

    return 0;
}
