#include "Acervo.h"
#include "Midias.h"
#include "Diversos.h"
#include "Pessoa.h"
#include "Livro.h"
#include "Academico.h"
#include "Periodico.h"
#include <iostream>
#include<vector>

void CadastroMidia(Midias *acervo);
void CadastroDiversos(Diversos *acervo);
void CadastroAcervo(Acervo *acervo);
void CadastroLivro(Livro *acervo);
void CadastroPeriodico(Periodico *acervo);
void CadastroAcademico(Academico *acervo);
void CadastroPeriodico(Periodico *acervo);
void AddAcervo(vector<Acervo*> &acervo);
void CadastroEmprestimo(vector<Acervo*> &acervo, vector<Pessoa*> &cadastro);
void CadastroPessoa(Pessoa *pessoa);
void Menu();
void CadastroEmprestimo(vector<Acervo*> &acervo,vector<Pessoa*> &cadastro);
void ImprimirFichaCatalografica(vector<Acervo*> &acervo);
void AddPessoa(vector<Pessoa*> &cadastro);

int main(int argc, char** argv) {
	
	system("chcp 1252 > nul");
	
	Menu();
	
	return 0;
	
}

void CadastroMidia(Midias *acervo){
	
	cout << "Digite a Categoria[VHS-CD-DVD]: ";
	string vhsDvdCD;
	getline(cin,vhsDvdCD);
	cin.clear();
	fflush(stdin);
	acervo->setVhsDvdCd(vhsDvdCD);
	cout << endl;
	
	CadastroAcervo(acervo);
	
}

void CadastroDiversos(Diversos *acervo){

	cout << "Digite a Categoria[Relatorio-Carta-Mapa]: ";
	string relCartMap;
	getline(cin,relCartMap);
	cin.clear();
	fflush(stdin);
	acervo->setRelCartMap(relCartMap);
	cout << endl;
	
	CadastroAcervo(acervo);
	
}

void CadastroAcervo(Acervo *acervo){
	
	
	cout << "Digite o Titulo: ";
	string titulo;
	getline(cin,titulo);
	cin.clear();
	fflush(stdin);
	acervo->setTitulo(titulo);
	cout << endl;
	
	cout << "Digite a Editora: ";
	string editora;
	getline(cin,editora);
	cin.clear();
	fflush(stdin);
	acervo->setEditora(editora);
	cout << endl;
	
	cout << "Digite o Numero da Edição: ";
	string numeroEdicao;
	getline(cin,numeroEdicao);
	cin.clear();
	fflush(stdin);
	acervo->setNumeroEdicao(numeroEdicao);
	cout << endl;
	
	cout << "Digite a Cidade: ";
	string cidade;
	getline(cin,cidade);
	cin.clear();
	fflush(stdin);
	acervo->setCidade(cidade);
	cout << endl;
	
	cout << "Digite a Ano: ";
	string ano;
	getline(cin,ano);
	cin.clear();
	fflush(stdin);
	acervo->setAno(ano);
	cout << endl;
	
	cout << "Digite o tamanho de Página(cm): ";
	string pagina;
	getline(cin,pagina);
	cin.clear();
	fflush(stdin);
	acervo->setPagina(pagina);
	cout << endl;
	
	cout << "Digite o Assunto: ";
	string assunto;
	getline(cin,assunto);
	cin.clear();
	fflush(stdin);
	acervo->setAssunto(assunto);
	cout << endl;
	
	
	
	cout << "Digite a Palavra Chave 1: ";
	string palavraChaveUm;
	getline(cin,palavraChaveUm);
	cin.clear();
	fflush(stdin);
	acervo->setPalavraChaveUm(palavraChaveUm);
	cout << endl;

	cout << "Digite a Palavra Chave 2: ";
	string palavraChaveDois;
	getline(cin,palavraChaveDois);
	cin.clear();
	fflush(stdin);
	acervo->setPalavraChaveDois(palavraChaveDois);
	cout << endl;
}

void CadastroLivro(Livro *acervo){
	
	CadastroAcervo(acervo);		
		
	cout << "Digite a Autor 1: ";
	string autorUm;
	getline(cin,autorUm);
	cin.clear();
	fflush(stdin);
	acervo->setAutorUm(autorUm);
	cout << endl;
	
	cout << "Digite a Autor 2: ";
	string autorDois;
	getline(cin,autorDois);
	cin.clear();
	fflush(stdin);
	acervo->setAutorDois(autorDois);
	cout << endl;
	
	cout << "Digite o IBSN: ";
	string ibsn;
	getline(cin,ibsn);
	cin.clear();
	fflush(stdin);
	acervo->setIbns(ibsn);
	cout << endl;
	
	cout << "Digite o CDU: ";
	string cdu;
	getline(cin,cdu);
	cin.clear();
	fflush(stdin);
	acervo->setCdu(cdu);
	cout << endl;
	
}

void CadastroAcademico(Academico *acervo){
	
	CadastroLivro(acervo);
	
	cout << "Digite a Categoria[Monografia-Dissertação-Tese]: ";
	string monoDisserTese;
	getline(cin,monoDisserTese);
	cin.clear();
	fflush(stdin);
	acervo->setMonoDisserTese(monoDisserTese);
	cout << endl;
	
}

void CadastroPeriodico(Periodico *acervo){
	
	CadastroAcervo(acervo);
	
	cout << "Digite a Categoria[Jornal-Revista]: ";
	string jornalRevista;
	getline(cin,jornalRevista);
	cin.clear();
	fflush(stdin);
	acervo->setJornalRevista(jornalRevista);
	cout << endl;
	
	cout << "Digite o Volume: ";
	string volume;
	getline(cin,volume);
	cin.clear();
	fflush(stdin);
	acervo->setVolume(volume);
	cout << endl;
}

void AddAcervo(vector<Acervo*> &acervo){
	
	int op = 0;
	while(op != 4){
		cout << "********Cadastro no Acervo********" << endl << endl;
		cout << "Escolha uma Opção:" << endl;
		cout << "[1] - Cadastrar" << endl << "[2] - Excluir" << endl;
		cout <<"[3] - Editar" <<  endl << "[4] - Retornar: ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		switch(op){
			case 1:{
				cout << "Escolha o que será adicionado no acervo:" <<endl;
				cout << "[1] - Livro" << endl << "[2] - Mídia[VHS-CD-DVD]" << endl << "[3] - Diversos[Relatório-Cartaz-Mapa]" << endl;
				cout << "[4] - Academico[Monografia-Dissertação-Tese]" << endl << "[5] - Periódico[Jornal-Reista]" << endl;
				cout <<"[0] - Retornar" << endl;
				int add;
				cin >> add;
				fflush(stdin);
				cin.clear();
				cout << endl;
				
				switch(add){
					case 1:{
						Livro *livro = new Livro();
						CadastroLivro(livro);
						acervo.push_back(livro);
						break;
					}
					case 2:{
						Midias *midia = new Midias();						
						CadastroMidia(midia);
						acervo.push_back(midia);											
						break;
					}
					case 3:{
						Diversos *diverso = new Diversos();
						CadastroDiversos(diverso);						
						acervo.push_back(diverso);						
						break;
					}
					case 4:{
						Academico *academico = new Academico();
						CadastroAcademico(academico);
						acervo.push_back(academico);
						break;
					}
					case 5:{
						Periodico *periodico = new Periodico();
						CadastroPeriodico(periodico);
						acervo.push_back(periodico);
						break;
					}
					case 0:{
						
						
						cout << "Retornando!" << endl <<endl;
						break;
					}
					default:{
						cout << "Opção INVALIDA!!" << endl << "Tente Novamente!!" << endl;
						break;
					}
				}
				break;
			}
			case 2:{
				
				cout << "Digite o Titulo a ser Excluido: ";
				string excluir;
				getline(cin,excluir);
				cin.clear();
				fflush(stdin);
				cout << endl;
				if(!acervo.empty()){
		
					for(vector<Acervo*>::iterator it = acervo.begin(); it != acervo.end(); it++){
						
						Acervo *aux = *it;
						
						if(aux->getTitulo()== excluir){
							
							acervo.erase(it);
							
						}					
					}
				}
				
				else{
					
					cout << "Não Encontrado!!!" << endl << endl;
				}				
				break;
			}
			
			case 3:{
				cout << "Digite o Titulo a ser Editado: ";
				string editar;
				getline(cin,editar);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				if(!acervo.empty()){
				
					for(vector<Acervo*>::iterator it = acervo.begin(); it != acervo.end(); it++){
						
						Acervo *aux = *it;
						
						if(aux->getTitulo()== editar){
							
							aux->imprimeAcervo();
							
							if(dynamic_cast<Livro*>(aux)){
								Livro *novoLivro = dynamic_cast<Livro*>(aux);
								CadastroLivro(novoLivro);
							}
							else if(dynamic_cast<Academico*>(aux)){
								Academico *novoAcademico = dynamic_cast<Academico*>(aux);
								CadastroAcademico(novoAcademico);
								
							}
							else if(dynamic_cast<Periodico*>(aux)){
								Periodico *novoPeriodico = dynamic_cast<Periodico*>(aux);
								CadastroPeriodico(novoPeriodico);
							}
							else if(dynamic_cast<Midias*>(aux)){
								Midias *novoMidias = dynamic_cast<Midias*>(aux);
								CadastroMidia(novoMidias);
							}
							else if(dynamic_cast<Diversos*>(aux)){
								Diversos *novoDiversos = dynamic_cast<Diversos*>(aux);
								CadastroDiversos(novoDiversos);
							}
						}						
					}
				}
				
				else{
					
					cout << "Não Encontrado!!!" << endl << endl;
				}
				
				break;
			}
			
			case 4:{
				cout << "Retornando" << endl <<endl;
				break;
			}
			default:{
				cout << "Opção Invalida!!" << endl << "Tente Novamente!" << endl;
				break;
			}
		}
	}
	
}

void CadastroPessoa(Pessoa *pessoa){
	cin.clear();
	fflush(stdin);
	cout << endl;
	
	cout << "Digite a Nome: ";
	string nome;
	getline(cin,nome);
	cin.clear();
	fflush(stdin);
	pessoa->setNome(nome);
	cout << endl;
	
	cout << "Digite o CPF: ";
	string cpf;
	getline(cin,cpf);
	cin.clear();
	fflush(stdin);
	pessoa->setCpf(cpf);
	cout << endl;
	
	cout << "Digite o Endereço: ";
	string endereco;
	getline(cin,endereco);
	cin.clear();
	fflush(stdin);
	pessoa->setEndereco(endereco);
	cout << endl;
	
	cout << "Digite o Telefone: ";
	string telefone;
	getline(cin,telefone);
	cin.clear();
	fflush(stdin);
	pessoa->setTelefone(telefone);
	cout << endl;
			
}

void CadastroEmprestimo(vector<Acervo*> &acervo, vector<Pessoa*> &cadastro){
	
	cout << "****CADASTRO DE EMPRESTIMO/DEVOLUÇÃO****" << endl;
	int op;
	do{
		cout << "Ecolha uma Opção" << endl;
		cout << "[1] - Emprestimo" << endl << "[2] - Devolução" << endl;
		cout << "[0] - Retornar" << endl;		
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		
		switch(op){
			
			case 1:{
				if(cadastro.empty() || acervo.empty()){
					cout << "Não Pessoas Cadastradas!" << endl << "Ou" << endl <<"Acero Vazio!" << endl << endl;
					break;
				}
				else{
				
					cout << "Digite o Nome do Cliente:";
					string nome;
					getline(cin,nome);
					cin.clear();
					fflush(stdin);
						
					vector<Acervo*> emprestado;
					Pessoa *buscaPessoaEmprestimo;
					
						for(vector<Pessoa*> ::iterator it = cadastro.begin(); it != cadastro.end(); it++){
							
							buscaPessoaEmprestimo = *it;
							
							if(buscaPessoaEmprestimo->getNome() == nome){
								
								int loop = 0;
								
								while(loop != 2){
									
								cout << "Digite o Titulo a ser emprestado:";
								string tituloEmprestado;
								getline(cin,tituloEmprestado);
								cin.clear();
								fflush(stdin);
								
								if(acervo.empty()){
									cout << "Acervo Vazio!" << endl << endl;
								}
								
								else{
									
									for(vector<Acervo*> ::iterator it = acervo.begin(); it != acervo.end(); it++){
										
										Acervo *emprestimo = *it;
										
										if(emprestimo->getTitulo() == tituloEmprestado){
																				
											emprestado.push_back(emprestimo);
											
										}										
									}
									cout << "Deseja Cadastrar mais Emprestimo" << endl;
									cout << "[1] - sim" << endl << "[2] - não" << endl;										
									cin >> loop;
									cin.clear();
									fflush(stdin);
								}
							}
							
							buscaPessoaEmprestimo->seteEmprestimo(emprestado);
							buscaPessoaEmprestimo->imprimeEmprestimo();
						}
					}
					break;
				}				
			}
		
			case 2:{
				
				cout << "Digite o Nome do Cliente:";
				string nome;
				getline(cin,nome);
				cin.clear();
				fflush(stdin);
				
				if(!cadastro.empty()){
					
				vector<Acervo*> emprestado;
				Pessoa *buscaPessoaEmprestimo;		
				
					for(vector<Pessoa*> ::iterator it = cadastro.begin(); it != cadastro.end(); it++){
						
						buscaPessoaEmprestimo = *it;
						
						if(buscaPessoaEmprestimo->getNome() == nome){
							
							buscaPessoaEmprestimo->imprimeEmprestimo();
							int loop = 1;
							
							while(loop > 0){
								
							cout << "Digite o Titulo a ser devolvido: ";
							string tituloDevolvido;
							getline(cin,tituloDevolvido);
							cin.clear();
							fflush(stdin);
							emprestado = buscaPessoaEmprestimo->getEmprestimo();
							
							if(!emprestado.empty()){
								
								for(vector<Acervo*> ::iterator it = emprestado.begin(); it != emprestado.end(); it++){
									
									Acervo *emprestimo = *it;
									
									if(emprestimo->getTitulo() == tituloDevolvido){	
																		
										acervo.push_back(emprestimo);
										
									}
									
									cout << "Deseja Realisar mais Devoluções deste Cliente" << endl;
									cout << "[1] - sim" << endl << "[2] - não";
									int ret;
									cin >> ret;
									cin.clear();
									fflush(stdin);
									
									if(ret == 1){
										
										loop = 1;
										
									}
									
									else{
										
										loop = 0;
										
									}
								}
							}
						}
					}
				}
			}
			
			break;
			
		}	
			
			case 0:{
				
				cout << "Retornando!" << endl;
				break;
				
			}
			
			default:{
				
				break;
				
			}
		}
		
	}while(op != 0);
}

void Menu(){
	
	vector<Acervo*> acervo;
	vector<Pessoa*> cadastro;
	
	
	cout << "********************************************" << endl;
	cout << "****************Menu Inicial****************" << endl;
	int op = 0;
	while(op != 5){
		
		cout << "*******   Escolha uma Opção:         *******" << endl;
		cout << "*** [1] - Acervo                         ***" << endl << "*** [2] - Cliente                        ***" << endl;
		cout << "**  [3] - Emprestimo/Devolução            **" << endl;
		cout << "*** [4] - Imprimir Ficha Catalográfica   " << "***" << endl;
		cout << "*** [5] - Sair: " << "                         ***" << endl;		
		cout << "********************************************" << endl << endl;
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		switch(op){
			
			case 1:{
				
				AddAcervo(acervo);
				break;
				
			}
			
			case 2:{
				
				AddPessoa(cadastro);
				break;
				
			}
			case 3:{
				
				CadastroEmprestimo(acervo,cadastro);
				break;
				
			}
			
			case 4:{
				ImprimirFichaCatalografica(acervo);
				break;
			}
			case 5:{
				
				cout << "Obrigado por usar o Sistema!" << endl << endl;
				break;
				
			}
			default:{
				
				cout << "Opção Invalida!!!" << endl << "Tente Novamente" << endl;
				break;
				
			}
		}
	}
	
}

void ImprimirFichaCatalografica(vector<Acervo*> &acervo){
	
	cout << "Informe o Titulo que deseja imprimir a Ficha Catalográfica: ";
	string imprimeFicha;
	getline(cin,imprimeFicha);
	cin.clear();
	fflush(stdin);
	
	if(acervo.empty()){
		
		cout << "Acervo Vazio!" << endl << endl;
		
	}
	
	else{
			
		for(vector<Acervo*>::iterator it = acervo.begin(); it != acervo.end(); it++){
			
			Acervo *ficha = *it;
			
			if(ficha->getTitulo() == imprimeFicha){			
			
				if(dynamic_cast<Diversos*>(ficha)){
					
					Diversos *newDiversos = dynamic_cast<Diversos*>(ficha);
					cout << "__________________________________________________" << endl;
					cout << " autor1. autor2.                                " << endl;
					cout << "                                                " << endl;
					cout << " " << newDiversos->getTitulo() << "-" << newDiversos->getNumeroEdicao() << "-" << newDiversos->getCidade() << newDiversos->getEditora() << "," << newDiversos->getAno() << endl;
					cout << "   pag.: cm" << endl;
					cout << "IBSN: " << endl;
					cout << " " << newDiversos->getAssunto() << " " << newDiversos->getPalavraChaveUm() << " " << newDiversos->getPalavraChaveDois() << endl;
					cout << "                                CDU: " << endl;
					cout << "__________________________________________________" << endl;
							
				}
				
				else if(dynamic_cast<Livro*>(ficha)){
					
					Livro *newLivro = dynamic_cast<Livro*>(ficha);
					cout << "__________________________________________________" << endl;
					cout << " " << newLivro->getAutorUm() << ". " << newLivro->getAutorDois() << endl;
					cout << " " << endl;
					cout << " " << newLivro->getTitulo() << "-" << newLivro->getNumeroEdicao() << "-" << newLivro->getCidade() << newLivro->getEditora() << "," << newLivro->getAno() << endl;
					cout << "   pag.: " << newLivro->getPagina() << "cm" << endl;
					cout << "IBSN: " << newLivro->getIbsn() << endl;
					cout << " " << newLivro->getAssunto() << " " << newLivro->getPalavraChaveUm() << " " << newLivro->getPalavraChaveDois() << endl;
					cout << "                                CDU: " << newLivro->getCdu() << endl;
					cout << "__________________________________________________" << endl;
							
				}
				
				else if(dynamic_cast<Midias*>(ficha)){
						
						Midias *newMidias = dynamic_cast<Midias*>(ficha);
						cout << "__________________________________________________" << endl;
						cout << " autor1. autor2                                   " << endl;
						cout << " " << endl;
						cout << " " << newMidias->getTitulo()<< "-" <<newMidias->getNumeroEdicao() << "-" << newMidias->getCidade()<< newMidias->getEditora() << "," << newMidias->getAno() << endl;
						cout << "   pag.: " << newMidias->getPagina() << "cm" << endl;
						cout << "IBSN: " << endl;
						cout << " " << newMidias->getAssunto() << " " << newMidias->getPalavraChaveUm() << " " << newMidias->getPalavraChaveDois() << endl;
						cout << "                                CDU: " << endl;;
						cout << "__________________________________________________" << endl;
								
					}
					
				else if(dynamic_cast<Periodico*>(ficha)){
					
					Periodico *newPeriodico = dynamic_cast<Periodico*>(ficha);
					cout << "__________________________________________________" << endl;
					cout << " " << endl;
					cout << " " << endl;
					cout << " " << newPeriodico->getTitulo() << "-" << newPeriodico->getNumeroEdicao() << "-" << newPeriodico->getCidade() << newPeriodico->getEditora() << "," << newPeriodico->getAno()<< endl;
					cout << "   pag.: " << newPeriodico->getPagina() << "cm" << endl;
					cout << "IBSN: " << endl;
					cout << " " << newPeriodico->getAssunto() << " " << newPeriodico->getPalavraChaveUm() << " " << newPeriodico->getPalavraChaveDois()<< endl;
					cout << "                                CDU: "  << endl;
					cout << "__________________________________________________" << endl;
							
				}				
			}
		}
	}
	
}

void AddPessoa(vector<Pessoa*> &cadastro){
	
	int op = 0;
	while(op != 4){
		cout << "********Cadastro de Pessoa********" << endl << endl;
		cout << "Escolha uma Opção:" << endl;
		cout << "[1] - Cadastrar" << endl << "[2] - Excluir" << endl;
		cout <<"[3] - Editar" <<  endl << "[4] - Retornar: ";
		cin >> op;
		cin.clear();
		fflush(stdin);
		cout << endl;
		switch(op){
			case 1:{
				
				Pessoa *pessoa = new Pessoa();
				CadastroPessoa(pessoa);
				cadastro.push_back(pessoa);
				break;			
			}
			
			case 2:{
				
				cout << "Digite o nome a ser Excluido: ";
				string excluir;
				getline(cin,excluir);
				cin.clear();
				fflush(stdin);
				cout << endl;
				if(!cadastro.empty()){
		
					for(vector<Pessoa*>::iterator it = cadastro.begin(); it != cadastro.end(); it++){
						
						Pessoa *aux = *it;
						
						if(aux->getNome()== excluir){
							
							cadastro.erase(it);
							break;
						}					
					}
					
					cout << "Não Encontrado!!!" << endl << endl;
					
				}
				
				else{
					
					cout << "Não Encontrado!!!" << endl << endl;
					break;
					
				}				
			}
			
			case 3:{
				cout << "Digite o nome a ser Editado: ";
				string editar;
				getline(cin,editar);
				cin.clear();
				fflush(stdin);
				cout << endl;
				
				if(!cadastro.empty()){
				
					for(vector<Pessoa*>::iterator it = cadastro.begin(); it != cadastro.end(); it++){
						
						Pessoa *aux = *it;
						
						if(aux->getNome()== editar){
							
							aux->imprimeEmprestimo();							
							CadastroPessoa(aux);
							break;
						}
					}
				}
				
				else{
					
					cout << "Não Encontrado!!!" << endl << endl;
					break;
				}
			}
			
			case 4:{
				
				cout << "Retornando" << endl <<endl;
				break;
				
			}
			
			default:{
				
				cout << "Opção Invalida!!" << endl << "Tente Novamente!" << endl;
				break;
			}
		}
	}
	
}

