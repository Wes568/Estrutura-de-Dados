#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int soma = 0;
int *psoma = &soma;
	
double media = 0;
double *pmedia = &media;
	
int maior = 0;
int *pmaior = &maior;

void popular(int vetor[10]){	
	for(int i=0; i<10; i++){
		cout << "Digite um n�mero: ";
		cin >> vetor[i];
	}
}

void mostrar(int vetor[10]){
	for(int i=0; i<10; i++)
	{
		cout << i+1 << "� valor: " << *vetor << " no endere�o: " << vetor << endl;
	++vetor;
	}
}

void media_arit(int vetor[10]){	
    for(int i=0; i<10; i++)
	{		
		*psoma += vetor[i]; 
	}
	
	*pmedia = (double)*psoma/10;
	cout << "M�dia Aritm�tica: " << *pmedia << endl;
}

void compara_num(int vetor[10]){
	
	cout << "N�meros que s�o maiores que a m�dia: " << endl;
	    for(int i=0; i<10; i++)
	{		
		if(vetor[i]>*pmedia){
			cout<< vetor[i] << endl;
		}
	}
	
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	
	 int vet1[10];
	 
	 popular(vet1);
	 cout << endl;
	 mostrar(vet1);
	 cout << endl;
	 media_arit(vet1);
	 cout << endl;
	 compara_num(vet1);
	
	return 0;
}

