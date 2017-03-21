#include <iostream>

using namespace std ;


void une(int iArr[], int iInicio, int iMitad, int iFin){
	int i, j, k ;
	int  nI = iMitad - iInicio + 1 ;
	int nF = iFin - iMitad ;
	
	//Arreglos temporales.
	int I[nI] , F[nF] ;
	
	//Copia los datos a los arreglos temporales.
	for(i  = 0 ; i < nI ; i++){
		I[i] = iArr[iInicio + i] ;
	}
	for(j = 0 ; j < nF ; j++){
		F[j] = iArr[iMitad + 1 + j] ;
	}

	//Une los arreglos temporales al arreglo principal
	i = 0 ; // Inicio del primer subarreglo
	j = 0 ; //Inicio del segundo subarreglo
	k = iInicio ; //Inicio del arreglo combinado.

	while(i < nI && j < nF){

		//Si el elemento del primer subarreglo es menor unir al arreglo principal.
		if(I[i] <= F[j]){
			iArr[k] = I[i] ;
			i++ ;
		}

		//Si el elemento del segundo arreglo es menor unir al arreglo principal.
		else{
			iArr[k] = F[j] ;
			j++ ;
		}
		k++ ;
	}

	//Copia los elementos restantes del primer subarreglo al arreglo principal.
	while(i < nI ){
		iArr[k] = I[i] ;
		i++ ;
		k++ ;
	}

	//Copia los elementos restantes del segundo subarrglo arregl principal.
	while(j < nF){
		iArr[k] = F[j] ;
		j++ ;
		k++ ;
	}

}


void mergeSort(int iArr[], int iInicio, int iFin){
	if(iInicio < iFin){

		int iMitad = iInicio  + (iFin - iInicio)/2 ;

		//Ordena las dos mitades.
		mergeSort(iArr, iInicio, iMitad) ;
		mergeSort(iArr, iMitad + 1 , iFin) ;

		//Une.
		une(iArr, iInicio, iMitad, iFin) ;
	}
}

void despliega(int iArr[], int n){
	for(int i = 0 ; i < n ; i++){
		cout << iArr[i] << "\t" ;
	}
	cout << endl ;
}

int main(){
	int prueba[5] = {1,7, 2, 6, 9} ;
	despliega(prueba, 5) ; 
	mergeSort(prueba, 0, 5) ; 
	despliega(prueba, 5 ) ;


	return 0 ;
}
