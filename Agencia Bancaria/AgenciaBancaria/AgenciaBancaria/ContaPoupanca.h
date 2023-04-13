#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include "Conta.h"

enum MesAniversario{
	JANEIRO = 1,
	FEVEREIRO = 2,
	MARCO = 3,
	ABRIL = 4,
	MAIO = 5,
	JUNHO = 6,
	JULHO = 7,
	AGOSTO = 8,
	SETEMBRO = 9,
	OUTUBRO = 10,
	NOVEMBRO = 11,
	DEZEMBRO = 12	
};

class ContaPoupanca : public Conta
{
	private:
		MesAniversario mes;
	
	
	public:
		
		ContaPoupanca();
		~ContaPoupanca();
		
		MesAniversario getMes();
		void setMes(MesAniversario mes);
		
		void imprimirExtrato();
		
	protected:
};

#endif
