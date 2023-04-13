#include "Diversos.h"

Diversos::Diversos()
{
}

Diversos::~Diversos()
{
}

string Diversos::getRelCartMap(){
	return relCartMap;
}

void Diversos::setRelCartMap(string relCartMap){
	this->relCartMap = relCartMap;
}

void Diversos::imprimeAcervo(){
	Acervo::imprimeAcervo();
	cout << "Categoria [Relatorio-Cartaz-Mapa]: " << relCartMap << endl;
}
