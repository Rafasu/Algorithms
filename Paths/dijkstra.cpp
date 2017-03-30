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
		     {9999, 9999, 9999, 3, 0}
		} ;

int L[5] ; //Caminos directos a partir del nodo de inicio.
int T[5] ; // Nodos
arco S[5] ; //Solucion.

void dijkstra(int n){
	int iInicio, i, j, k ;
	int iMin = 9999, iVmin = 0 ;
	cout << "Nodo Inicio : " << endl ;
	cin >> iInicio ;

	//Inicializacion
	for(i = 0 ; i < n ; i++){
		L[i] = iMat[iInicio - 1][i]  ;
		T[i] = iInicio - 1 ;
	}
	L[iInicio-1] = -1 ;

	//Algoritmo de Dijkstra

	//Repite n - 1 veces.
	for(i = 1 ; i < n ; i++){

		for(j = 0 ; j < n ;  j++){
			if( 0 <= L[j] && L[j] <= iMin){
				iMin = L[j] ;
				iVmin = j ;
			}
		}

		//Agregar arco a la solucion. 
		S[i - 1].iSrc = T[iVmin] ;
		S[i - 1].iDst = iVmin ;

		//Checa si el camino es mas corto. 
		for(k = 0 ; k < n ; k++){
			if(L[iVmin] + iMat[iVmin][k] < L[k]){
				L[k]  = L[iVmin] + iMat[iVmin][k] ;
				T[k] = iVmin ;
			}
		}
		//Control para que no se considere en la busqueda del menor.
		L[iVmin] = -1 ;
	}
}



int main(){

	return 0 ;
}
