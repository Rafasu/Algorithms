#include <iostream>

using namespace std ;

class Nodo{
	public:
		int dato ;
		Nodo *pSiguiente ;
		Nodo() ;
		Nodo(int dato) ;
		Nodo(int dato, Nodo *pS) ;
};


Nodo::Nodo(){
	int dato = 0 ;
	pSiguiente = NULL ;
}

Nodo::Nodo(int dato){
	this->dato =  dato ;
	pSiguiente = NULL ;
}

Nodo::Nodo(int dato, Nodo *pS){
	this->dato = dato ;
	pSiguiente = pS ;
}
