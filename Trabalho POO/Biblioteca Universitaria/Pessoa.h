#ifndef PESSOA_H
#define PESSOA_H
#include<vector>
#include "Acervo.h"
#include <iostream>


using namespace std;

class Pessoa
{
	protected:
		string nome;
		string cpf;
		string endereco;
		string telefone;
		vector<Acervo*> emprestimo;
		
		
	public:
		Pessoa();
		~Pessoa();
		
		string getNome();
		string getCpf();
		string getEndereco();
		string getTelefone();
		vector<Acervo*> getEmprestimo();
		
		void setNome(string nome);
		void setCpf(string cpf);
		void setEndereco(string endereco);
		void setTelefone(string telefone);
		void seteEmprestimo(vector<Acervo*> &emprestimo);
		
		void imprimeEmprestimo();
	
};

#endif
