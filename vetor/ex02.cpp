/*
2. Escreva um programa que defina 2 vetores de tamanho 10, A e B.
Em seguida, insira 10 elementos em A. Transfira esses 10 elementos
de A para B, mas em ordem inversa. Por exemplo, o elemento que
estiver na primeira posição de A deverá ser inserido na última
posição de B, e assim por diante. Ao final, imprima o conteúdo de B.
*/

#include <iostream>
using namespace std;

int main(){
  const int TAM = 10;
  int vetorA[TAM], vetorB[TAM];

  // inserção dos elementos no vetor A
  cout <<  "===== INSERCAO DE ELEMENTOS NO VETOR A =====" << endl;
  cout <<  "Insira 10 numeros inteiros no vetor A:" << endl;
  for(int i=0; i<TAM; i++) cin >> vetorA[i];

  cout << endl << "Vetor A = [ ";
  for (int i = 0; i < TAM; i++) {
    cout << vetorA[i] << " ";
  }
  cout << "]" << endl;

  // Transição de elementos para o vetor B
  cout <<  "===== TRANSICAO DE ELEMENTOS PARA O VETOR B =====" << endl;
  for(int i=0; i<TAM; i++){
    vetorB[i] = vetorA[(TAM - 1) - i];
  }

  cout << endl << "Vetor B = [ ";
  for (int i = 0; i < TAM; i++) {
    cout << vetorB[i] << " ";
  }
  cout << "]" << endl;

  return 0;
}