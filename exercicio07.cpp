#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	int  p=0,s=1,r,i; 			//primeiro valor, segundo valor, resultado, contador
				
	for(i=1; i < 15;i++){
		
		if(i == 1){
			cout << " "<< 1 ;
		}					
		r = p + s;
		p = s;
		s = r;
		cout << " " << r;
	
	}
	
	return 0;	
}
