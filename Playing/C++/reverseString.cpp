//One great way to reverse a string.
//Big 0: 0(n/2) 
//Made with chars.

#include <iostream>

using namespace std ;

//Return a pointer to the reverse string array. 
char *reverse(char *str, int n){
	//Pointer to the beginning of the array.
	char *pointer1 = str ;
	//Pointer to the end of the array.
	char *pointer2 = str + n - 1 ;

	while(pointer1 < pointer2){
		char temp = *pointer1 ;
		*pointer1 = *pointer2 ;
		*pointer2 = temp ;
		pointer1++ ; 
		pointer2-- ;
	}
	return str ;
}


int main(){
	char prueba[5] = "hola" ;
	cout << prueba << endl ;
	reverse( prueba , 4 ) ;
	cout << prueba << endl ;

	return 0 ;
}
