#include "Supermercado.h"

int main(){

	Supermercado* supermercado = new Supermercado(8);

	while(supermercado->aberto()){
		supermercado->getRelogio()->tick();
	}

	return 0;
}