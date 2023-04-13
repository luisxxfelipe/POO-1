#include "Periodico.h"

Periodico::Periodico()
{
}

Periodico::~Periodico()
{
}

string Periodico::getVolume(){
	return volume;
}

string Periodico::getJornalRevista(){
	return jornalRevista;
}

void Periodico::setVolume(string volume){
	this->volume = volume;
}

void Periodico::setJornalRevista(string jornalRevista){
	this->jornalRevista = jornalRevista;
}

void Periodico::imprimeAcervo(){
	
	cout << "Categoria: " << jornalRevista << endl;
	Acervo::imprimeAcervo();
	cout << "Volume: " << volume << endl;
}
