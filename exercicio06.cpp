#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	//variaveis
	int i=1, soma;
		
	while(i < 100){
		
		i++;
		soma += i;
		
	}	
	
	cout <<"O total da soma dos cem primeiros números inteiros é "<< soma;
	return 0;
}
