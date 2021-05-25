#include <iostream>
#include <stdlib.h>

using namespace std;
#define pi 3.14159
int main(){
	setlocale(LC_ALL, "");
	
	//variaveis
	double volume,altura, raio, r;
	
	cout << "Insira a altura da lata: ";
	cin >> altura;
	cout << "Insira o raio da base da lata: ";
	cin >> r;
	
	//calcular
	raio = r*r;
	volume = pi * raio * altura;
	
	cout << "O volume da lata é " << volume;
	
	return 0;
	
	
}
