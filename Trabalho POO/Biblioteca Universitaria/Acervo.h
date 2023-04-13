#ifndef ACERVO_H
#define ACERVO_H
#include <iostream>


using namespace std;


class Acervo
{
	protected:
		string titulo;	
		string editora;
		string numeroEdicao;
		string cidade;
		string ano;
		string pagina;
		string assunto;
		string palavraChaveUm;
		string palavraChaveDois;		
		
	public:
		Acervo();
		~Acervo();
		
		string getTitulo();		
		string getEditora();
		string getNumeroEdicao();
		string getCidade();
		string getAno();
		string getPagina();
		string getPalavraChaveUm();
		string getPalavraChaveDois();
		string getAssunto();
		
		
		void setTitulo(string titulo);		
		void setEditora(string editora);
		void setNumeroEdicao(string numeroEdicao);
		void setCidade(string cidade);
		void setAno(string ano);
		void setPagina(string pagina);
		void setPalavraChaveUm(string palavraChaveUm);
		void setPalavraChaveDois(string palavraChaveDois);
		void setAssunto(string assunto);
				
		virtual void imprimeAcervo();		
	
};

#endif
