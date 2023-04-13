#include "Pessoa.h"

Pessoa::Pessoa()
{
}

Pessoa::~Pessoa()
{
}

string Pessoa::getNome(){
	return nome;
}

string Pessoa::getCpf(){
	return cpf;
}

string Pessoa::getEndereco(){
	return endereco;
}

string Pessoa::getTelefone(){
	return telefone;
}

vector<Acervo*> Pessoa::getEmprestimo(){
	return emprestimo;
}

void Pessoa::setNome(string nome){
	this->nome = nome;
}

void Pessoa::setCpf(string cpf){
	this->cpf = cpf;
}

void Pessoa::setEndereco(string endereco){
	this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone){
	this->telefone = telefone;
}

void Pessoa::seteEmprestimo(vector<Acervo*> &emprestimo){
	this->emprestimo = emprestimo;
}

void Pessoa::imprimeEmprestimo(){
	cout << "********EMPRESTIMO EFETUADOS*********" << endl;
	cout << "Nome: " << nome << endl;
	cout << "CPF: " << cpf << endl;
	cout << "Telefone: " << telefone << endl;
	cout << "Endereço: " << endereco << endl;
	for(vector<Acervo*>::iterator it = emprestimo.begin(); it != emprestimo.end(); it++){
		Acervo *emprestado = *it;
		emprestado->imprimeAcervo();
	}
	}
