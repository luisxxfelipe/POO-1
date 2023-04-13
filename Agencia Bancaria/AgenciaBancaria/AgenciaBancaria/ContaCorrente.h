#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.h"

class ContaCorrente : public Conta
{
	
	private:
		float limite;
		
	public:
		ContaCorrente();
		ContaCorrente(string agencia, string numConta, string proprietario, float saldo, float limite);
		~ContaCorrente();
		
		float getLimite();
		void setLimite(float limite);
		
		bool sacar(float valor);
		void imprimirExtrato();
		
	protected:
};

#endif
