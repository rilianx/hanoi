
#include "pila.h"
#include <stdlib.h>
#include <stdio.h>

void inicializar_pila(PILA* pila){
	pila->cabeza=NULL;
}

int esvacia(PILA* pila){
	return (pila->cabeza==NULL);
}

void insertar(PILA* pila, Tipo dato){
	nodo* nuevo;
	nuevo = (nodo*) malloc (sizeof(nodo));
	nuevo -> dato= dato;
	nuevo -> sgte = pila->cabeza;
	pila->cabeza = nuevo;
}

void quitar(PILA* pila){
	if(esvacia(pila)) return;
	nodo* aux = pila->cabeza;
	pila->cabeza = pila->cabeza->sgte;
	free(aux);
}

Tipo cima(PILA* pila){
	if(esvacia(pila)) return -1;
	return pila->cabeza->dato;
}

int tamanno(PILA* pila){
	int len=0;
	nodo* aux=pila->cabeza;
	while(aux!=NULL){
		len++;
		aux=aux->sgte;
	}
	return len;
}

