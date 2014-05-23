#include "Tempo.h"

Tempo::Tempo(){
	horas = 0;
	minutos = 0;
	segundos = 0;
}

Tempo::Tempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tempo::~Tempo(){

}

void Tempo::tick(){
	segundos++;
	refresh();
}

bool Tempo::lessThan(Tempo* tempo){
	if(horas >= tempo->getHoras()) return false;
	else if(minutos >= tempo->getMinutos()) return false;
	else if(segundos >= tempo->getSegundos()) return false;
	return true;
}

void Tempo::refresh(){
	refreshS();
	refreshM();
	refreshH();
}

void Tempo::refreshS(){
	if(segundos >= 60){
		minutos++;
		refreshM();
	}
	segundos = segundos % 60;
}

void Tempo::refreshM(){
	if(minutos >= 60){
		horas++;
		refreshH();
	}
	minutos = minutos % 60;
}

void Tempo::refreshH(){
	horas = horas % 24;	
}

void Tempo::add(Tempo* tempo){
	segundos += tempo->getSegundos();
	refreshS();
	minutos += tempo->getMinutos();
	refreshM();
	horas += tempo->getHoras();
	refreshH();
}

//TODO
char* Tempo::getTempo(){
	return "";
	// return horas+":"+minutos+":"+segundos;
}

int Tempo::getHoras(){
	return horas;
}

int Tempo::getMinutos(){
	return minutos;
}

int Tempo::getSegundos(){
	return segundos;
}