#ifndef CARRINHO_H
#define CARRINHO_H

#include "Produto.h"
#include "PilhaDuplamenteEncadeada/Pilha.hpp"

class Carrinho{
	public:
		Carrinho();
		virtual ~Carrinho();
		void addProduto(Produto* produto);
		Produto* retiraProduto();
		Pilha<Produto*>* getProdutos();
	private:
		Pilha<Produto*>* produtos;
};

#endif