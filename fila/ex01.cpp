#include <iostream>
using namespace std;

void insere(int);
void remove();

const int TAM = 10;
int count = 0;
int fila[TAM], inicio = 0, fim = 0;

int main(){
  insere(3);
  remove();
  return 0;
}

void insere(int valor){
  if(count == TAM) {
    cout << "fila cheia";
    return;
  }

  fila[fim] = valor;
  fim++;
  count++;

  if(fim >= TAM) {
    fim = 0;
  }
}

void remove(){
  if(inicio == fim) {
    cout << "fila vazia";
    return;
  }

  inicio++;

  if(inicio >= TAM) {
    inicio = 0;
  }
}