#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
setlocale(LC_ALL, "");
	//variaveis c = centigrados e f = farenheit
	float c, f;
	
	cout << "Digite a temperatura em graus Cent�grados: "; //escrever na tela
	cin >> c; //ler o valor
	
	//converter para farenheint
	f = (9*c + 160)/5; 
	
	//imprimir o resultado na tela
	cout << "A temperatura de " << c <<"�C" << " em Farenheit �: " << f << "�F"; 
	
	return 0;
}

