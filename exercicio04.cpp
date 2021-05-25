#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	
	//variaveis 
	int n, i, maior = 0;

    cout<<"Digite 5 numeros:\n";
    
	for (i=0; i<5; i++){
        cin>>n;
        
        if (n > maior){
        	maior = n;
    	}
    	
    }
    cout<<"O maior numero é "<<maior;

	return 0;
}



