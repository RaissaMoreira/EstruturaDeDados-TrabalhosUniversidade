#include <iostream>
#include <cstdlib>
using namespace std;

#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

// VARIÁVEIS GLOBAIS
const int TAM = 5;
int topo = -1, pilha[TAM];

void menu();
void imprime();
void push();
void pop();
void topoPilha();
void clearScreen();

int main(){
  menu();
}

void clearScreen() {
    system(CLEAR);
}

void menu(){
  int type;

  cout << "=== MENU ===" << endl;
  cout << "1 - VISUALIZAR PILHA" << endl;
  cout << "2 - INSERIR ELEMENTOS NA PILHA" << endl;
  cout << "3 - REMOVER ELEMENTOS DA PILHA" << endl;
  cout << "4 - VISUALIZAR O TOPO DA PILHA" << endl;
  cout << "0 - SAIR" << endl;

  cin >> type;

  if (type == 1) {
      clearScreen();
      imprime();
  }
  if (type == 2) {
      clearScreen();
      push();
  }
  if (type == 3) {
      clearScreen();
      pop();
  }
  if (type == 4) {
      clearScreen();
      topoPilha();
  }
}

void imprime(){
  char option;
  
  if (topo == -1){
    cout << "A pilha está vazia" << endl;
  } else {
    cout << "PILHA = [ ";
    for (int i = 0; i <= topo; i++){
      if(i <= topo){
        cout << pilha[i] << " ";
      } else {
        cout << "_" << " ";
      }
    }
    cout << "]" << endl;
  }
  
    cout << "B - VOLTAR" << endl;
    cin >> option;
    
    if (option == 'B' || option == 'b') menu();
}

void push(){
  int valor;
  char option;

  cout << "Insira um numero na Pilha: " << endl;
  cin >> valor;

  if (topo == TAM - 1){
    cout << "A pilha está cheia";
    return;
  }

  topo++;
  pilha[topo] = valor;

  cout << "A - INSERIR MAIS UM NUMERO" << endl;
  cout << "B - VOLTAR" << endl;

  cin >> option;

  if (option == 'A' || option == 'a') push();
  if (option == 'B' || option == 'b') menu();
}

void pop(){
  char option;
  
  if (topo == -1){
    cout << "A pilha está vazia";
  } else {
    topo--;
  }
  
  cout << "A - REMOVER MAIS UM NUMERO" << endl;
  cout << "B - VOLTAR" << endl;

  cin >> option;
  
  if (option == 'A' || option == 'a') pop();
  if (option == 'B' || option == 'b') menu();
}

void topoPilha(){
  int option;
  
  cout << "TOPO: " << pilha[topo] << endl;
  
  cout << "B - VOLTAR" << endl;
  cin >> option;
  
  if (option == 'B' || option == 'b') menu();
}