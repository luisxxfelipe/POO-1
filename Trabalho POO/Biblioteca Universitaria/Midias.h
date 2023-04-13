#ifndef MIDIAS_H
#define MIDIAS_H

#include "Acervo.h"

class Midias : public Acervo
{
	protected:
		string vhsDvdCd;
	public:
		Midias();
		~Midias();
		
		string getVhsDvdCd();
		
		void setVhsDvdCd(string vhsDvdCd);
		
		void imprimeAcervo();
	
};

#endif
