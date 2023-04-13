#ifndef LIVRO_H
#define LIVRO_H

#include "Acervo.h"

class Livro : public Acervo
{
	protected:
		string autorUm;
		string autorDois;
		string ibsn;
		string cdu;
		
	public:
		Livro();
		~Livro();
		
		string getAutorUm();
		string getAutorDois();
		string getIbsn();
		string getCdu();
		
		void setAutorUm(string autorUm);
		void setAutorDois(string autorDois);
		void setIbns(string ibsn);
		void setCdu(string cdu);
		
		void imprimeAcervo();
	
};

#endif
