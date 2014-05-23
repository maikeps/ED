#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "Tempo.h"
#include "Relogio.cpp"


int main(){
	// Tempo* t1 = new Tempo(1,59,59);
	// Tempo* t2 = new Tempo(2,1,1);

	// t1->add(t2);

	// printf("%d:%d:%d\n", t1->getHoras(), t1->getMinutos(), t1->getSegundos());

	Relogio* relogio = new Relogio();

	int cont = 0;
	while(true){
		cont++;
		if(cont % 1000000 == 0){
			relogio->tick();
			Tempo* t = relogio->getTempo();
			printf("%d:%d:%d\n", t->getHoras(), t->getMinutos(), t->getSegundos());
		}
	}
}