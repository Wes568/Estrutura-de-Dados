#include <iostream>
using namespace std;

#define MAX 30

struct Pilha {
	int qtde;
	float nos[MAX];
};

Pilha* init() {
	Pilha *p = new Pilha;
	p->qtde = 0;
	return p;
}

int isEmpty(Pilha *p) {
	return(p->qtde == 0);
}

int pushPar(Pilha *p, float v) {
	int podeEmpilhar = (p->qtde < MAX);
	if (podeEmpilhar) {
		p->nos[p->qtde] = v;
		p->qtde++;
	}
	return podeEmpilhar;
}

int pushImpar(Pilha *p, float v) {
	int podeEmpilhar = (p->qtde < MAX);
	if (podeEmpilhar) {
		p->nos[p->qtde] = v;
		p->qtde++;
	}
	return podeEmpilhar;
}

/* int pop(Pilha *p){
	float ret;
	int podeDesempilhar = (p->qtde > 0);
	if (podeDesempilhar){
		ret = p->nos[p->qtde-1];
		p->qtde--;
	}
	else
	{
		ret = -1;
	}
	return ret;
}*/

void print (Pilha *p) {
	for(int i = p->qtde-1; i>=0 ;i--)
	{
		cout << p->nos[i] << endl;
	}
	cout << "-------------------" << endl;
}

int main(int argc, char** argv)
{
	Pilha *pilhaFloat;
	pilhaFloat = init();
	int pilha[30];
	int ant = -1;
	int aux = 0;
	
	cout << "Pilha vazia: " << (isEmpty(pilhaFloat)?"Sim":"Nao") << endl;
	
	cout << "Digite os valores para empilhar: " << endl;
	
	for(int i=0; i<30; i++)
	{
		do
		{
			cin >> pilha[i];
			if(pilha[i]<ant){
				cout << "O numero deve ser maior que o anterior, digite novamente: " << endl;
				aux = 1;
			}
			else
			{
				aux = 0;
			}
		}
		while(aux==1);

		if(pilha[i]%2 ==0)
		{
			pushPar(pilhaFloat, pilha[i]);
		}
		else
		{
			pushImpar(pilhaFloat, pilha[i]);	
		}

		ant = pilha[i];
	};
	
	cout << "Exibicao dos numeros de forma decrescente" << endl;
	
	print(pilhaFloat);

	
	return 0;
}