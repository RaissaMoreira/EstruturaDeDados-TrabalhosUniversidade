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