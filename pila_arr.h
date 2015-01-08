

#ifndef PILA_ARR
#define PILA_ARR

#define N 100

typedef int Tipo;

typedef struct Elemento{
	Tipo elementos[N];
	int indice_cima;
} PILA;

void inicializar_pila(PILA* pila);
void insertar(PILA* pila, Tipo dato);
void quitar(PILA* pila);
Tipo cima(PILA* pila);
int esvacia(PILA* pila);
int tamanno(PILA* pila);
int _pilaLlena(PILA* pila);
void limpiarpila(PILA* pila);

#endif
