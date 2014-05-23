#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
	public:
		Produto();
		virtual ~Produto();
		double getPreco();
	private:
		double preco;
};

#endif