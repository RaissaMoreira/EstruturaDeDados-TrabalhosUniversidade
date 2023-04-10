#include <iostream>
using namespace std;

const int TAM = 4;
int fila[TAM];
int inicio = 0;
int fim = 0;
int contador = 0;

void enqueue(int valor) {
  if(contador == TAM) {
    cout << "Fila cheia" << endl;
    return;
  }
  contador++;
  fila[fim] = valor;

  if(fim == TAM - 1){
    fim = 0;
  } else {
    fim++;
  }
}

void dequeue(){
  if(contador == 0) {
    cout << "Fila vazia" << endl;
    return;
  }
  contador--;

  if(inicio == TAM - 1){
    inicio = 0;
  } else {
    inicio++;
  }
}

void inicioFila(){
  if(contador == 0) {
    cout << "Fila vazia" << endl;
    return;
  }

  cout <<"Inicio da Fila eh: " << fila[inicio] << endl;
}

void imprime(){
  int i, j;

  if(contador == 0){
    cout << "Fila vazia" << endl;
    return;
  }

  i = 0;
  j = inicio;

  while(i < contador){
    cout << fila[j] << " ";
    if(j == TAM - 1){
      j = 0;
    } else {
      j++;
    }
    i++;
  }
}

int main(){
  enqueue(10);
  enqueue(20);
  enqueue(30);
  dequeue();
  imprime();
}