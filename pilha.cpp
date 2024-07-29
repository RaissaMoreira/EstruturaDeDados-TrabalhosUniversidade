#include <iostream>
using namespace std;

const int TAM = 5;
int topo = -1, fila[TAM];

void push(int);
void pop();
void topoPilha();

int main(){
  push(3);
  pop();
  topoPilha();
  return 0;
}

void push(int valor){
  if(topo == TAM-1) {
    cout << "pilha cheia";
    return;
  }

  topo++;
  fila[topo] = valor;
}

void pop(){
  topo--;
}

void topoPilha() {
  cout << fila[topo];
}