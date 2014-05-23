#ifndef CLIENTE_H
#define CLIENTE_H

#include "Produto.h"
#include "Carrinho.h"
// #include "Supermercado.h"
// #include "Tempo.h"

class Cliente{
	public:
		Cliente();
		virtual ~Cliente();
		void abandonarCarrinho();
		void pegaProduto(Produto* produto);
		void virtual escolheFila();
	private:
		void olhaProRelogio();

		// Supermercado* supermercado;
		Carrinho* carrinho;
		bool pagarComCheque;
		double valorTotalDeCompras;
		int totalDeCompras;
		// Tempo* horaDeChegada;
		// Tempo* tempoDeEspera;
};

#endif