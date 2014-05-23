#include "Caixa.h"

Caixa::Caixa(char* _id, int _desempenho, double _salario){
	id = _id;
	desempenho = _desempenho;
	salario = _salario;
}

Caixa::~Caixa(){

}

char* Caixa::getId(){
	return id;
}

int Caixa::getDesempenho(){
	return desempenho;
}

Fila<Cliente>* Caixa::getFila(){
	return fila;
}

int Caixa::getClientesNaFila(){
	return fila->size();
}

int Caixa::getClientesAtendidos(){
	return clientesAtendidos;
}

Tempo* Caixa::getMediaEspera(){
	return mediaEspera;
}

double Caixa::getFaturamentoMedio(){
	return faturamentoMedio;
}

double Caixa::getFaturamentoTotal(){
	return faturamentoTotal;
}