#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	
	float val=0, maior=0, med, dif, soma = 0,total, i=0;
	
	
		while(i<15){
			cout << "Digite um número: ";
			cin >> val; 
						
			soma += val; //soma os valores	
			i++; 
			
			
			if(val > maior){
				maior = val;
			}
					
		}
		
	med = soma/15; //calcula a média
	dif = med-maior; //diferença da media com o maior valor
	//teste
	//cout << "\n O maior valor é: "<< maior << "\n";
	//cout << "\n A soma de todos os números é: " << soma << "\n";
	//cout << "\n A média dos números é: "<< med << "\n";
	cout << "\n A diferença da média e o maior valor é: "<< dif << "\n"; 
	
	return 0;
}
