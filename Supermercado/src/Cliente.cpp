#include "Cliente.h"
// #include "Relogio.h"

Cliente::Cliente(){
	// supermercado = upermercado;
	carrinho = new Carrinho();
	int chance = (rand()%100);
	if(chance < 20) pagarComCheque = true;
	else pagarComCheque = false;
	valorTotalDeCompras = 0;
	totalDeCompras = 0;
	// tempoDeEspera = new Tempo(0,0,0);
	olhaProRelogio();
}

Cliente::~Cliente(){
	// delete horaDeChegada;
	// delete tempoDeEspera;
}

void Cliente::olhaProRelogio(){
	// Relogio* relogio = supermercado->getRelogio();
	// int horas = relogio->getTempo()->getHoras();
	// int minutos = relogio->getTempo()->getMinutos();
	// int segundos = relogio->getTempo()->getSegundos();
	// horaDeChegada = new Tempo(horas, minutos, segundos);
}
void Cliente::pegaProduto(Produto* produto){
	carrinho->addProduto(produto);
}

void Cliente::abandonarCarrinho(){
	// supermercado->recolheCarrinho(carrinho);
	// ~Cliente();char* a = "posso fazer isso?";
}