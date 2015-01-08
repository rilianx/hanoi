#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "hanoi.h"

int mover_piezas(int m, hanoi* h, PILA* torre1, PILA* torre2, PILA* torre_aux);

void main(){
	hanoi h;

	inicializar(&h, 8);

	imprimir(&h);

    mover_piezas(h.n, &h, &(h.torre[0]),&(h.torre[1]),&(h.torre[2]));

}

int mover_piezas(int m, hanoi* h, PILA* torre1, PILA* torre2, PILA* torre_aux){
	if(m==1){
		char c; scanf("%c",&c);
		cambiar_pieza(torre1, torre2);
		imprimir(h);
	}else if (m>1){
		mover_piezas(m-1, h, torre1, torre_aux, torre2);
		char c; scanf("%c",&c);
		cambiar_pieza(torre1, torre2);
		imprimir(h);
		mover_piezas(m-1, h, torre_aux, torre2, torre1);
	}
	return 1;
}
