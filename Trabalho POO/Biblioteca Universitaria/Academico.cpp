#include "Academico.h"

Academico::Academico()
{
}

Academico::~Academico()
{
}

string Academico::getMonoDisserTese(){
	return monoDisserTese;
}

void Academico::setMonoDisserTese(string monoDisserTese){
	this->monoDisserTese = monoDisserTese;
}

void Academico::imprimeAcervo(){
	
	cout << "Categoria: " << monoDisserTese << endl;
	Livro::imprimeAcervo();
}
