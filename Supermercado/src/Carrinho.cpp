#include "Carrinho.h"

Carrinho::Carrinho(){
	produtos = new Pilha<Produto*>();
}

Carrinho::~Carrinho(){

}

void Carrinho::addProduto(Produto* produto){
	produtos->add(produto);
}

Produto* Carrinho::retiraProduto(){
	return produtos->remove();
}

Pilha<Produto*>* Carrinho::getProdutos(){
	return produtos;
}