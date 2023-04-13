#include "Acervo.h"

Acervo::Acervo()
{
}

Acervo::~Acervo()
{
}

string Acervo::getTitulo(){
	return titulo;
}

string Acervo::getEditora(){
	return editora;
}


string Acervo::getNumeroEdicao(){
	return numeroEdicao;
}

string Acervo::getCidade(){
	return cidade;
}

string Acervo::getAno(){
	return ano;
}

string Acervo::getPagina(){
	return pagina;
}

string Acervo::getPalavraChaveUm(){
	return palavraChaveUm;
}

string Acervo::getPalavraChaveDois(){
	return palavraChaveDois;
}

string Acervo::getAssunto(){
	return assunto;
}

void Acervo::setTitulo(string titulo){
	this->titulo = titulo;
}


void Acervo::setEditora(string editora){
	this->editora = editora;
}

void Acervo::setNumeroEdicao(string numeroEdicao){
	this->numeroEdicao = numeroEdicao;
}

void Acervo::setCidade(string cidade){
	this->cidade = cidade;
}

void Acervo::setAno(string ano){
	this->ano = ano;
}

void Acervo::setPagina(string pagina){
	this->pagina = pagina;
}

void Acervo::setPalavraChaveUm(string palavraChaveUm){
	this->palavraChaveUm = palavraChaveUm;
}

void Acervo::setPalavraChaveDois(string palavraChaveDois){
	this->palavraChaveDois = palavraChaveDois;
}

void Acervo::setAssunto(string assunto){
	this->assunto = assunto;
}

void Acervo::imprimeAcervo(){
	
	cout << "Titulo: " << titulo << endl;
	cout << "Editora: " << editora << endl;
	cout << "Numero da Edição: " << numeroEdicao << endl;
	cout << "Cidade: " << cidade << endl;
	cout << "Ano: " << ano << endl;
	cout << "Pagina: " << pagina << endl;
	cout << "Assunto: " << assunto << endl;
	cout << "Palavra Chave 1: " << palavraChaveUm << endl;
	cout << "Palavra Chave 2: " << palavraChaveDois << endl;
}
