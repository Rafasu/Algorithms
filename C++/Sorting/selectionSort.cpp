#include <iostream>

using namespace std ;

void selectionSort(int iArr[], int n){
	int temp, iMin ;
	for(int i = 0 ; i < n - 1 ; i++){
		iMin = i ;
		for(int j = i + 1 ; j < n ; j++){

			//Search for the kth min element.
			if(iArr[j] < iArr[iMin]){
				iMin = j ;
			}
		}

		//Swap
		if(i != iMin ) {
			cout << iArr[iMin] << endl ;
			temp = iArr[i] ;
			iArr[i] = iArr[iMin] ;
			iArr[iMin] = temp ;
		}
	}
}


void print(int iArr[], int n) {
	for(int i = 0 ; i < n ;i++){
		cout << iArr[i] << "\t" ; 
	}
	cout << endl ;
}

int main(){
	int prueba[5] = {0, 8 , 6, 9,-1} ;
	print(prueba, 5) ;
	selectionSort(prueba, 5) ;
	print(prueba, 5 ) ;
	return 0 ;
}
