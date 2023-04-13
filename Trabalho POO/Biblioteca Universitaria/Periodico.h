#ifndef PERIODICO_H
#define PERIODICO_H

#include "Acervo.h"

class Periodico : public Acervo
{
	
	protected:
		string volume;
		string jornalRevista;
	public:
		Periodico();
		~Periodico();
		
		string getVolume();
		string getJornalRevista();
		
		void setJornalRevista(string jornalRevista);
		void setVolume(string volume);
		
		void imprimeAcervo();
	
};

#endif
