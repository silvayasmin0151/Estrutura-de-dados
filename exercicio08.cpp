#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	
	float val=0, maior=0, med, dif, soma = 0,total, i=0;
	
	
		while(i<15){
			cout << "Digite um n�mero: ";
			cin >> val; 
						
			soma += val; //soma os valores	
			i++; 
			
			
			if(val > maior){
				maior = val;
			}
					
		}
		
	med = soma/15; //calcula a m�dia
	dif = med-maior; //diferen�a da media com o maior valor
	//teste
	//cout << "\n O maior valor �: "<< maior << "\n";
	//cout << "\n A soma de todos os n�meros �: " << soma << "\n";
	//cout << "\n A m�dia dos n�meros �: "<< med << "\n";
	cout << "\n A diferen�a da m�dia e o maior valor �: "<< dif << "\n"; 
	
	return 0;
}
