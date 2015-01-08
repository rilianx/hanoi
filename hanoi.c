
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "hanoi.h"

void inicializar(hanoi* h, int n){
	h->n=n;

	int i=0;
	for(i=0;i<3;i++)
	   inicializar_pila(&(h->torre[i]));

    int j=0;
    for(j=n; j>0; j--)
	   poner_pieza(&(h->torre[0]),j);

}

int poner_pieza(PILA* torre, int pieza){
	if(!esvacia(torre) && cima(torre)<pieza) return 0;
	insertar(torre, pieza);
	return 1;
}

int cambiar_pieza(PILA* torre1, PILA* torre2){
	if(esvacia(torre1)) return 0;
	if(!esvacia(torre2) && (cima(torre1)>cima(torre2))){ puts("movimiento invalido!"); return 0;}

	int pieza=cima(torre1);
	quitar(torre1);
	insertar(torre2, pieza);
	return 1;
}

void imprimir(hanoi* h){

	PILA aux;
	inicializar_pila(&aux);
	int i=0;
	for(i=0;i<3;i++){
	   printf("\nTorre %d (%d):\n",i+1,tamanno(&(h->torre[i])));
	   int t=h->n;

	   while(t>tamanno(&(h->torre[i]))){printf("\n"); t--;}

	   while(!esvacia(&(h->torre[i]))){
		   int pieza=cima(&(h->torre[i]));

		   quitar(&(h->torre[i]));
		   insertar(&aux,pieza);

		   int compl=h->n-pieza;
		   for(;compl>0;compl--) printf(" ");
		   for(;pieza>0;pieza--) printf("XX");
		   printf("\n");
	   }

	   while(!esvacia(&aux)){
		   insertar(&(h->torre[i]),cima(&aux));
		   quitar(&aux);
	   }

    }
}
