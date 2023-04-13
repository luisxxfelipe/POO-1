#include "Livro.h"

Livro::Livro()
{
}

Livro::~Livro()
{
}

string Livro::getAutorUm(){
	return autorUm;
}

string Livro::getAutorDois(){
	return autorDois;
}

string Livro::getIbsn(){
	return ibsn;
}

string Livro::getCdu(){
	return cdu;
}

void Livro::setAutorUm(string autorUm){
	this->autorUm = autorUm;
}

void Livro::setAutorDois(string autorDois){
	this->autorDois = autorDois;
}

void Livro::setIbns(string ibsn){
	this->ibsn = ibsn;
}

void Livro::setCdu(string cdu){
	this->cdu = cdu;
}

void Livro::imprimeAcervo(){
	
	Acervo::imprimeAcervo();
	cout << "Autor 1: " << autorUm << endl;
	cout << "Autor 2: " << autorDois << endl;
	cout << "IBSN: " << ibsn << endl;
	cout << "CDU: " << cdu << endl;
}
