#include <iostream>
#include <cstring>
using namespace std;

const int TAM = 8;
int pilha[TAM];
int topo = -1; // topo = 0 ainda tem um elemento no índice 0

void push(int valor) {
	if (topo == TAM - 1) {
		cout << "A pilha esta cheia!" << endl;
		return;
	}
	topo++;
	pilha[topo] = valor;
  cout << "Topo inserido com sucesso!" << endl;
}

void pop() {
	if (topo < 0) {
		cout << "A pilha ja esta vazia!" << endl;
		return;
	}
	topo--;
  cout << "Elemento removido com sucesso!" << endl;
}

void topoPilha() {
	if(topo == -1) {
		cout << "A pilha esta vazia!" << endl;
    return;
	}
	cout << "Topo eh: " << pilha[topo] << endl;
}

void imprime(){
	if(topo == -1) {
		cout << "A pilha esta vazia!" << endl;
    return;
	}

	for(int i = 0; i <= topo; i++) {
		cout << pilha[i] << " ";
	}
}

int main(){
	push(10);
	push(15);
	push(30);
	topoPilha();
	pop();
	imprime();
}