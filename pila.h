

#ifndef PILAA
#define PILAA

typedef int Tipo;

typedef struct Elemento{
	Tipo dato;
	struct Elemento* sgte;
} nodo;

typedef struct nn{
	nodo* cabeza;
} PILA;

void inicializar_pila(PILA* pila);
void insertar(PILA* pila, Tipo dato);
void quitar(PILA* pila);
Tipo cima(PILA* pila);
int esvacia(PILA* pila);
int tamanno(PILA* pila);

#endif
