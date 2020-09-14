#include <iostream>
#include <string>
#include <time.h> 
using namespace std;


class Data
{
	private: 	
	   int dia;
	   int mes;
	   int ano;
	   int idade;
    public:
    	Data(int dia, int mes, int ano)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
		}
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
		}
    	void setDia(int dia)
    	{
			this->dia = dia;
		}
		void setMes(int mes)
    	{
			this->mes = mes;
		}
		void setAno(int ano)
    	{
			this->ano = ano;
		}
		void setIdade(int idadeTemp, int diaTemp, int mesTemp, int anoTemp){
			this->dia = diaTemp;
			this->mes = mesTemp;
			this->ano = anoTemp;
			this->idade = idadeTemp;
		};
		int getDia()
		{
			return this->dia;
		}
		int getMes()
		{
			return this->mes;
		}
		int getAno()
		{
			return this->ano;
		}
		int getIdade(){

		if((dia>9)&(mes>=9))
		{
    		return this->idade=(2020-ano)-1;
		}
		else{
			return this->idade=2020-ano;
		}	
		};
		string getData()
		{
		    return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
		}
};

class Contato
{		
	private: 		
		string nome;
		string email;
		string telefone;
		
	public:
		void setNome(string nomeTemp){
			this->nome = nomeTemp;
		};
		void setEmail(string emailTemp){
			this->email = emailTemp;
		};
		void setTelefone(string telefoneTemp){
			this->telefone = telefoneTemp;
		};

		
		string getNome(){
			return this->nome;	
		};
		string getEmail(){
			return this->email;	
		};
		string getTelefone(){
			return this->telefone;	
		};


};

int main(int argc, char** argv)
{   
	string nome;
	string email;
	string telefone;
	int dia;
	int mes;
	int ano;
	
	Contato *cont = new Contato();
	Data *hoje = new Data(9, 9, 2020);
	Data *nasc = new Data(dia, mes, ano);
	
	cout << "Digite o seu nome: ";
	cin >> nome;
	cont->setNome(nome);
	
	cout << "Digite o seu e-mail: ";
	cin >> email;
	cont->setEmail(email);
	
	cout << "Digite o seu telefone: ";
	cin >> telefone;
	cont->setTelefone(telefone);
	
	cout << "Digite sua data de nascimento: " << endl;
	cout << "Dia: "; 
	cin >> dia;
	nasc->setDia(dia);
	
	cout << "Mes: "; 
	cin >> mes;
	nasc->setMes(mes);
	
	cout << "Ano: "; 
	cin >> ano;
	nasc->setAno(ano);
	
	cout<< endl;
	
	cout << "---" <<hoje->getData()<< "---" << endl;
	cout << "-----------------------" << endl;
	cout << "Nome: " <<cont->getNome() << endl;
	cout << "E-mail:" <<cont->getEmail() << endl;
	cout << "Telefone: " <<cont->getTelefone() << endl;
	cout << "Data de Nascimento: " <<nasc->getData() << endl;
	cout << "Idade: " << nasc->getIdade() << endl;
	

}
