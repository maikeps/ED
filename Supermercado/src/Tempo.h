#ifndef TEMPO_H
#define TEMPO_H

class Tempo{
	public:
		Tempo();
		Tempo(int _horas, int _segundos, int _minutos);
		virtual ~Tempo();
		void tick();
		void refresh();
		void refreshS();
		void refreshM();
		void refreshH();
		void add(Tempo* tempo);
		char* getTempo();
		int getHoras();
		int getMinutos();
		int getSegundos();
		bool lessThan(Tempo* tempo);
	private:
		int horas;
		int minutos;
		int segundos;
};

#endif