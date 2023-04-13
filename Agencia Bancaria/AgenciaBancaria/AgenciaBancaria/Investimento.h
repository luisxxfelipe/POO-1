#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

enum TipoInvestimento{
	CDB = 1,
	TESOURO = 2,
	ACAO = 3,
	IMOBILIARIO = 4
};

class Investimento
{
	protected:
		TipoInvestimento tipoInvestimento;
		float saldoInvestimento;
	
	public:
		
		Investimento();
		Investimento(TipoInvestimento tipoInvestimento, float saldoInvestimento);
		~Investimento();
		
		TipoInvestimento getTipoInvestimento();
		float getSaldoInvestimento();
		
		void setTipoInvestimento(TipoInvestimento tipoInvestimento);
		void setSaldoInvestimento(float saldoInvestimento);
		
};

#endif
