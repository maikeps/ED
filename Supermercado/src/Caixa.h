#include "Tempo.h"
#include "Fila/Fila.hpp"
#include "Cliente.h"

class Caixa{
	public:
		Caixa(char* id, int desempenho, double salario);
		virtual ~Caixa();
		char* getId();
		int getDesempenho();
		Fila<Cliente>* getFila();
		int getClientesNaFila();
		int getClientesAtendidos();
		Tempo* getMediaEspera();
		double getFaturamentoTotal();
		double getFaturamentoMedio();
	private:
		char* id;
		int desempenho;
		double salario;
		Fila<Cliente>* fila;
		// int clientesNaFila;
		int clientesAtendidos;
		Tempo* mediaEspera;
		double faturamentoTotal;
		double faturamentoMedio;
};