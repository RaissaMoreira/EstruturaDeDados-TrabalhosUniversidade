/*
3. Escreva um programa que defina 2 vetores de tamanho 10, A e B, e
insira 10 elementos em A. Em seguida, digite um valor qualquer, e
todos os números que forem maiores do que esse valor devem ser
transferidos de A para B (sem deixar espaços em branco em B). Ao
final, imprima o conteúdo de B.
*/

#include <iostream>
using namespace std;

int main(){
  const int TAM = 10;
  int vetorA[TAM], vetorB[TAM], num, j = 0;

  // inserção dos elementos no vetor A
  cout <<  "===== INSERCAO DE ELEMENTOS NO VETOR A =====" << endl;
  cout <<  "Insira 10 numeros inteiros no vetor A:" << endl;
  for(int i=0; i<TAM; i++) cin >> vetorA[i];

  cout << endl << "Vetor A = [ ";
  for (int i = 0; i < TAM; i++) {
    cout << vetorA[i] << " ";
  }
  cout << "]" << endl;

  // inserção de um valor aleatorio
  cout <<  "Insira um valor aleatorio:" << endl;
  cin >> num;

  // Transição de elementos maiores que num para o vetor B
  cout <<  "===== TRANSICAO DE ELEMENTOS MAIORES QUE NUM PARA O VETOR B =====" << endl;
  for(int i=0; i<TAM; i++){
    if(vetorA[i] > num){
      vetorB[j] = vetorA[i];
      j++;
    }
  }

  cout << endl << "Vetor B = [ ";
  for (int i = 0; i < j; i++) {
    cout << vetorB[i] << " ";
  }
  cout << "]" << endl;

  return 0;
}