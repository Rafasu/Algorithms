#include <iostream>

using namespace std ;

struct arco{
	int iSrc, iDst ;
};


// Test Graph
int iMat[5][5] = {   {0, 2, 9999, 10, 9999},
		     {9999, 0 , 9, 9999, 5},
		     {12, 9999, 0, 6, 9999},
		     {9999, 9999,9999, 0, 7},
		     {9999, 9999, 3, 9999, 0}
		} ;

int L[5] ; //Caminos directos a partir del nodo de inicio.
int T[5] ; // Nodos
arco S[4] ; //Solucion.

void prim(int n){
	int i, j, k ; 
	int iInicio, iMin, iVmin ;

	//Inicializacion con el primer nodo de la matriz.
	for(i = 0 ; i < n ; i++){
		L[i] = iMat[0][i] ;
		T[i] = 0 ;
	}
	L[0] = -1 ;

	//Repite n - 1 veces. 
	for(i = 1 ;  i < n ; i++){

		iMin = 9999 ;

		//Busca el arco mas corto entre los nodos del conjunto.
		for(j = 1; j < n ; j++){
			if(0 <=  L[j] && L[j] <=  iMin){
				iMin = L[j] ;
				iVmin = j ;
			}
		}

		//Agregar arco a la solucion.
		S[i-1].iSrc = T[iVmin] ;
		S[i-1].iDst = iVmin ;

		//Checa si existe un arco menor hacia los demas nodos en base
		// Al conjunto de nodos que falta enlazar.
		//A diferencia de dijkstra no toma en cuenta el acumulado.
		for(k = 1 ; k < n ; k++){
			if(iMat[iVmin][k] < L[k]) {
				L[k] = iMat[iVmin][k] ;
				T[k] = iVmin ;
			}
		}

		//Control para que no se considere en la busqueda del menor. 
		L[iVmin] = -1 ;
	}
}

void print(int n){
	int i, j ;
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n ; j++){
			cout << iMat[i][j] << "\t"; 
		}
		cout << endl ;
	}
	cout << endl ;
}



int main(){
	print(5) ; 

	prim(5) ;



	int i ;
	for(i = 0 ; i < 4; i++){
		cout << S[i].iSrc + 1<< "\t" ;
	}
	cout << endl ;
	i = 0 ;
	while( i < 4){
		cout << S[i].iDst + 1<< "\t" ;
		i++ ;
	}
	cout << endl ;

	return 0 ;
}
