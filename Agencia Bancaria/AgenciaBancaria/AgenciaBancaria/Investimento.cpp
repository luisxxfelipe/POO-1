#include "Investimento.h"

Investimento::Investimento(){
	
}

Investimento::Investimento(TipoInvestimento tipoInvestimento, float saldoInvestimento){
	setTipoInvestimento(tipoInvestimento);
	setSaldoInvestimento(saldoInvestimento);
}

Investimento::~Investimento(){
	
}
		
TipoInvestimento Investimento::getTipoInvestimento(){
	return tipoInvestimento;
}

float Investimento::getSaldoInvestimento(){
	return saldoInvestimento;
}
		
void Investimento::setTipoInvestimento(TipoInvestimento tipoInvestimento){
	this->tipoInvestimento = tipoInvestimento;
}

void Investimento::setSaldoInvestimento(float saldoInvestimento){
	this->saldoInvestimento = (saldoInvestimento > 0) ? saldoInvestimento : 0;
}
