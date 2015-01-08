
#include "pila_arr.h"
#include <stdlib.h>
#include <stdio.h>

int _pilaLlena(PILA* pila){
	return (pila->indice_cima==N-1);
}

void inicializar_pila(PILA* pila){
	pila->indice_cima=-1;
}

void insertar(PILA* pila, Tipo dato){
	if(_pilaLlena(pila)){
		puts("Desbordamiento de Pila!");
		exit(0);
	}
	pila->indice_cima++;
	pila->elementos[pila->indice_cima]=dato;
}

void quitar(PILA* pila){
	if(esvacia(pila)) return;
	pila->indice_cima--;
}

Tipo cima(PILA* pila){
	if(esvacia(pila)) return -1;
	return pila->elementos[pila->indice_cima];
}

int esvacia(PILA* pila){
	return (pila->indice_cima==-1);
}

int tamanno(PILA* pila){
	return pila->indice_cima+1;
}

void limpiarpila(PILA* pila){
	pila->indice_cima=-1;
}
