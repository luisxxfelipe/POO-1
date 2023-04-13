#include "Conta.h"

Conta::Conta()
{
}

Conta::Conta(string agencia, string numConta, string proprietario, float saldo){
	setAgencia(agencia);
	setNumConta(numConta);
	setProprietario(proprietario);
	setSaldo(saldo);
}

Conta::~Conta()
{
}

string Conta::getAgencia(){
	return agencia;
}

string Conta::getNumConta(){
	
	return numConta;
}


string Conta::getProprietario(){
	return proprietario;
}

float Conta::getSaldo(){
	return saldo; 
}
		
void Conta::setAgencia(string agencia){
	this->agencia = agencia;
}

void Conta::setNumConta(string numConta){
	this->numConta = numConta;
}

void Conta::setProprietario(string proprietario){
	this->proprietario = proprietario;
}

void Conta::setSaldo(float saldo){
	this->saldo = (saldo >= 0) ? saldo : 0;
}
		
bool Conta::sacar(float valor){
	if(valor > saldo || valor <= 0)
		return false;
	else{
		saldo = saldo - valor;
		return true;
	}	
}

bool Conta::depositar(float valor){
	if(valor > 0){
		saldo += valor;
		return true;
	}else
		return false;
}

void Conta::imprimirExtrato(){
	
	cout << "			Imprimindo informações da conta			" << endl << endl;
	cout << "Agência: " << agencia << endl;
	cout << "Número da conta: " << numConta << endl;
	cout << "Proprietário: " << proprietario << endl;
	cout << "Saldo: " << saldo << endl;
}
