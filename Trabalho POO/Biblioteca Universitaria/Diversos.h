#ifndef DIVERSOS_H
#define DIVERSOS_H

#include "Acervo.h"

class Diversos : public Acervo
{
	protected:
		string relCartMap;
	public:
		Diversos();
		~Diversos();
		
		string getRelCartMap();
		
		void setRelCartMap(string relCartMap);
		
		void imprimeAcervo();
	
};

#endif
