#include "Produto.h"
#include <stdlib.h>

Produto::Produto(){
	int valor = (rand()%90)+1;
}

Produto::~Produto(){

}

double Produto::getPreco(){
	return preco;
}