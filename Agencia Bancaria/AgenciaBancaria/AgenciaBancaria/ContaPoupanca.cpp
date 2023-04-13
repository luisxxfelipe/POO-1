#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca()
{
}

ContaPoupanca::~ContaPoupanca()
{
}

MesAniversario ContaPoupanca::getMes(){
	return mes;
}

void ContaPoupanca::setMes(MesAniversario mes){
	this->mes = mes;
}

void ContaPoupanca::imprimirExtrato(){
	Conta::imprimirExtrato();
	cout << "Mes de aniversário: " << mes << endl << endl;
}
