#ifndef CONTAINVESTIMENTO_H
#define CONTAINVESTIMENTO_H

#include "ContaCorrente.h"
#include "Investimento.h"

class ContaInvestimento : public ContaCorrente, public Investimento
{
	public:
		ContaInvestimento();
		ContaInvestimento(string agencia, string numConta, string proprietario, float saldo, float limite, TipoInvestimento tipoInvestimento, float saldoInvestimento);
		~ContaInvestimento();
		
		void imprimirExtrato();
		
	protected:
};

#endif
