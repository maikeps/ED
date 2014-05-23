#include "Relogio.h"

Relogio::Relogio(){
	tempo = new Tempo();
}

Relogio::~Relogio(){

}

void Relogio::tick(){
	Tempo* segundo = new Tempo(0,0,1);
	tempo->add(segundo);
	delete segundo;
}

void Relogio::reset(){
	delete tempo;
	tempo = new Tempo();
}

Tempo* Relogio::getTempo(){
	return tempo;
}