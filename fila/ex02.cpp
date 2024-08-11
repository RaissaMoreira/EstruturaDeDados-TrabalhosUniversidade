#include <iostream>
using namespace std;

void insereFila();
void removeFila();
void inicioFila();
void imprime();
void menu();

const int TAM = 3;
int fila[TAM], count = -1, inicio = 0, fim = 0, nItems = 0;

int main() {
    menu();
    return 0;
}

void menu(){
  int type;

  cout << "=== MENU ===" << endl;
  cout << "1 - VISUALIZAR FILA" << endl;
  cout << "2 - INSERIR ELEMENTOS NA FILA" << endl;
  cout << "3 - REMOVER ELEMENTOS DA FILA" << endl;
  cout << "4 - VISUALIZAR INICIO DA FILA" << endl;
  cout << "0 - SAIR" << endl;

  cin >> type;
  
  switch(type) {
      case 1:
        imprime();
        break;
      case 2:
        insereFila();
        break;
      case 3:
        removeFila();
        break;
      case 4:
        inicioFila();
        break;
      case 0:
        menu();
        break;
      default:
        cout << "Opcao invalida!" << endl;
        menu();
        break;
  }
}

void insereFila() {
    char option;
    int valor;
    
    if(nItems == TAM) {
        cout << "Fila cheia!!!" << endl;
        menu();
    }
    
    cout << "Adicione um valor inteiro: " << endl;
    cin >> valor;
    
    fila[fim] = valor;
    fim = (fim + 1) % TAM; // manter o incremento circular
    nItems++;
    
    cout << "A - INSERIR MAIS UM NUMERO" << endl;
    cout << "B - VOLTAR" << endl;

    cin >> option;

    if (option == 'A' || option == 'a') insereFila();
    else if (option == 'B' || option == 'b') menu();
    else {
        cout << "Opcao invalida!" << endl;
        menu();
    }
}

void imprime() {
    char option;
    
    cout << "FILA - [ ";
    
    for(int i = 0; i < TAM; i++) {
        int idx = (inicio + i) % TAM; // Calcula o índice circularmente
        
        if(i < nItems) {
            cout << fila[idx] << " ";
        }
    }
    
    cout << "]" << endl;
    
    cout << "FIM: fila[" << fim << "]" << endl;
    cout << "INICIO: fila[" << inicio << "]" << endl;
    
    cout << "B - VOLTAR" << endl;
    cin >> option;
    if (option == 'B' || option == 'b') menu();
}

void inicioFila() {
    char option;
    
    cout << "Inicio da FILA: " << fila[inicio] << endl;
    
    cout << "B - VOLTAR" << endl;
    cin >> option;
    if (option == 'B' || option == 'b') menu();
}

void removeFila() {
    char option;
    
    if(nItems == 0) {
        cout << "Fila vazia!!!" << endl;
        menu();
    }
    
    inicio = (inicio + 1) % TAM; // Incrementa circularmente
    nItems--;
    
    cout << "A - REMOVER MAIS UM NUMERO" << endl;
    cout << "B - VOLTAR" << endl;

    cin >> option;

    if (option == 'A' || option == 'a') insereFila();
    else if (option == 'B' || option == 'b') menu();
    else {
        cout << "Opcao invalida!" << endl;
        menu();
    }
}