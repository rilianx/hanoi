
#include "pila.h"
//~ #include "pila_arr.h"

#ifndef HANOI
#define HANOI

typedef struct{
	PILA torre[3];
	int n; //numero de piezas
} hanoi;

void inicializar(hanoi* h, int n);
int poner_pieza(PILA* torre, int pieza);
int cambiar_pieza(PILA* torre1, PILA* torre2);
void imprimir(hanoi* h);

#endif
