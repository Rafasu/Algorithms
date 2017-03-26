#include <iostream>

using namespace std ;


void bubbleSort(int iArr[], int n){
	bool change =  true ;
	int i = 0, temp ; 

	//If there's no change the array is sorted. 
	while(change){
		change = false ;
		i++ ;
		for(int j = 0 ; j < n - i; j++){
			if(iArr[j] > iArr[j+1]){
				change = true ;

				//Swap the element.
				temp =  iArr[j] ;
				iArr[j] =  iArr[j+1] ;
				iArr[j+1] = temp ;
			}
		}
	}
}


void print(int iArr[], int n){
	for(int i = 0 ; i < n ; i ++){
		cout << iArr[i] << "\t" ;
	}
	cout << endl ;
}

int main(){
	int prueba[5] = {1, 8 , 7 , 2, 9} ;
	print(prueba, 5) ; 
	bubbleSort(prueba, 5) ;
	print(prueba, 5) ;

	return 0 ;
}
