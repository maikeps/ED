#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

#include "ListaCircular/ListaCircular.hpp"
#include "Caixa.h"
#include "Relogio.h"
#include "Carrinho.h"
#include "Tempo.h"

class Supermercado{
	public:
		Supermercado(int horasDeFuncionamento);
		virtual ~Supermercado();
		bool aberto();
		ListaCircular<Caixa>* getCaixas();
		Relogio* getRelogio();
		int getDesistencias();
		double getPerdaTotal();
		void recolheCarrinho(Carrinho* carrinho);
	private:
		ListaCircular<Caixa>* caixas;
		Relogio* relogio;
		int desistencias;
		double perdaTotal;
		Tempo* fechamento;
};

#endif