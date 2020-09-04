#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

#define LIN 3
#define COL 3

	int x;
    int y;
	
	int **mat1;
	int **mat2;
	
	int soma;

	void popula_matriz(int **par1,int **par2){
	
		mat1 = new int*[LIN];
		mat2 = new int*[LIN];
		
		cout << "Digite os valores da primeira matriz: " << endl;
		
		for(x=0; x<LIN; ++x)
		{
			mat1[x] = new int[COL];
			for(y=0; y<COL; ++y)
		    {
		    	cin >> mat1[x][y];
		    	
		    }
		}
	
		cout << "Digite os valores da segunda matriz: " << endl;	
		
		for(x=0; x<LIN; ++x)
		{
			mat2[x] = new int[COL];
			for(y=0; y<COL; ++y)
		    {
		    	cin >> mat2[x][y];
		    	
		    }
			}
	}
	
	void mostra_matriz(int **par1,int **par2){
	
		for(x=0; x<LIN; ++x)
		{
		    for(y=0; y<COL; ++y)
		    {
	            cout << mat1[x][y] << " | ";
			}
			
			cout << setw(10);
					
		    for(y=0; y<COL; ++y)
		    {
	            cout << mat2[x][y] << " | " ;
			}
			cout << endl; 
		}		
	}
	
	void compara_matriz(int **par1,int **par2){
		for(x=0; x<LIN; ++x)
		{
		    for(y=0; y<COL; ++y)
		    {
		    	if(mat1[x][y] == mat2[x][y])
				{
					soma++;
				}
			}
		}
		if(soma==9)
		{
			cout << "Matrizes iguais!" << endl;
		}
		else
		{
			cout << "Matrizes diferentes!" << endl;
		}
	}
	
	int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	
	popula_matriz(mat1, mat2);
	cout << endl;
	mostra_matriz(mat1, mat2);
	cout << endl;
	compara_matriz(mat1, mat2);
	
	
	delete[] mat2;

	return 0;
}