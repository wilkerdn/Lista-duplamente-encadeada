#include "lista.h"

int main(int argc, char** argv){	
	Lista* l;
	int i;
	
	l = criaLista();
	
	inserirPosicao(l, 0, 0);
	inserirPosicao(l, 1, 1);
	inserirPosicao(l, 2, 2);
	inserirPosicao(l, 3, 3);
	inserirPosicao(l, 4, 4);
	mostrarLista(l);
	removerPosicao(l, 2, &i);
	mostrarLista(l);
	removerPosicao(l, 3, &i);
	mostrarLista(l);

	liberaLista(l);
	
	return 0;
}
