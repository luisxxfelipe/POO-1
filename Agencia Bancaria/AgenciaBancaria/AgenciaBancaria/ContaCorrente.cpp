#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
}

ContaCorrente::ContaCorrente(string agencia, string numConta, string proprietario, float saldo, float limite) : Conta(agencia, numConta, proprietario, saldo){
	setLimite(limite);
}

ContaCorrente::~ContaCorrente()
{
}

float ContaCorrente::getLimite(){
	return limite;
}

void ContaCorrente::setLimite(float limite){
	this->limite = (limite > 0) ? limite : 0;
}
		
void ContaCorrente::imprimirExtrato(){
	Conta::imprimirExtrato();
	cout << "Limite Total: " << limite << endl;
	if(saldo >= 0)
		cout << "Limite para uso: " << limite << endl;
	else
		cout << "Limite para uso: " << limite - (-1*saldo)  << endl;
}

bool ContaCorrente::sacar(float valor){
	if(valor > (saldo + limite) || valor <= 0)
		return false;
	else{
		saldo = saldo - valor;
		return true;
	}
}
