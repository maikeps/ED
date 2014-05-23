#ifndef RELOGIO_H
#define RELOGIO_H

#include "Tempo.h"

class Relogio{
	public:
		Relogio();
		virtual ~Relogio();
		void tick();
		void reset();
		Tempo* getTempo();
	private:
		Tempo* tempo;
};

#endif