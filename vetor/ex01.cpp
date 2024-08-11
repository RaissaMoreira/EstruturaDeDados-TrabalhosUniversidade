/*
1. Escreva um programa no qual o usuário digite 10 números inteiros
que serão armazenados em um vetor. Sobre esse vetor:
a. Imprima em ordem direta (do elemento na posição 0 até o
elemento na posição 9)
b. Imprima em ordem inversa (do elemento na posição 9 até o
elemento na posição 0)
c. Procure o maior elemento do vetor
d. Procure o menor elemento do vetor
e. Calcule quantas vezes e em que posições do vetor aparece
um determinado número digitado pelo usuário
f. Calcule a média entre os 10 valores
*/

#include <iostream>
using namespace std;

int main(){
  const int len = 10;
  int numbers[len],i , menor, maior, chosenNumber, count = 0;
  float sum;
  
  cout <<  "Digite 10 numeros inteiros:\n";
  for(i=0; i<len; i++) cin >> numbers[i];

  cout << "==== ORDEM DIRETA ====" << endl;
  for(i=0; i<len; i++) cout << numbers[i] << " ";

  cout << endl << "==== ORDEM INVERSA ====" << endl;
  for(i=len - 1; i>=0; i--) cout << numbers[i] << " ";

  cout << endl << "==== MAIOR E MENOR ====" << endl;
  menor = numbers[0];
  maior = numbers[0];

  for(int number: numbers) {
    if(number > maior) maior = number;
    if(number < menor) menor = number;
  };

  cout << "Maior elemento: " << maior << endl;
  cout << "Menor elemento: " << menor << endl;

  cout << "==== POSICAO E QUANTAS VEZES APARECE ====" << endl;
  cout <<  "Digite um numero inteiro e verifique se ele aparece no array: \n";
  cin >> chosenNumber;

  cout << "Posicoes do numero " << chosenNumber << " : ";
  for(i=0; i<len; i++) {
    if(numbers[i] == chosenNumber) {
      cout << i << " ";
      count++;
    }
  }
  cout << endl << "O numero " << chosenNumber << " aparece " << count << " vezes no vetor." << endl;

  cout << "==== MEDIA DOS VALORES ====" << endl;
  sum = 0;

  for(int number: numbers) {
    sum = number + sum;
  };

  cout << "Media dos valores: " << sum/len << endl; 

  return 0;
}