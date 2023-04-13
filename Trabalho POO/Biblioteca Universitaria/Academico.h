#ifndef ACADEMICO_H
#define ACADEMICO_H

#include "Livro.h"

class Academico : public Livro
{
	protected:
		string monoDisserTese;
	public:
		Academico();
		~Academico();
		
		string getMonoDisserTese();
		
		void setMonoDisserTese(string monoDisserTese);
		
		void imprimeAcervo();
	
};

#endif
