#include "Supermercado.h"

Supermercado::Supermercado(int horasDeFuncionamento){
	caixas = new ListaCircular<Caixa>();
	relogio = new Relogio();
	desistencias = 0;
	perdaTotal = 0;
	fechamento = new Tempo(horasDeFuncionamento,0,0);
}

Supermercado::~Supermercado(){

}

bool Supermercado::aberto(){
	return relogio->getTempo()->lessThan(fechamento);
}

ListaCircular<Caixa>* Supermercado::getCaixas(){
	return caixas;
}

Relogio* Supermercado::getRelogio(){
	return relogio;
}

int Supermercado::getDesistencias(){
	return desistencias;
}

double Supermercado::getPerdaTotal(){
	return perdaTotal;
}

void Supermercado::recolheCarrinho(Carrinho* carrinho){
	desistencias++;
	bool temProdutos = true;
	while(temProdutos){
		try{
			Produto* p = carrinho->retiraProduto();
			perdaTotal += p->getPreco();
			delete p;
		}catch(EstruturaVaziaException){
			temProdutos = false;
		}
	}
	char* a = "tem coisa pra fazer ainda";
	delete carrinho;
}