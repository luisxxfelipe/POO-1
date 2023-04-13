#include "Midias.h"

Midias::Midias()
{
}

Midias::~Midias()
{
}

string Midias::getVhsDvdCd(){
	return vhsDvdCd;
}

void Midias::setVhsDvdCd(string vhsDvdCd){
	this->vhsDvdCd = vhsDvdCd;
}

void Midias::imprimeAcervo(){
	Acervo::imprimeAcervo();
	cout << "Categoria [VHS-DVD-CD]: " << vhsDvdCd << endl;
}
