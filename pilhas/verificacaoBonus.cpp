#include <iostream>
#include <stack>
using namespace std;

void validate(const string);
void push(char);
void pop();
char pilha[20];
int topo = -1;

int main()
{
  string expressao = "((2+3)*[5/3]){[()]}";
  validate(expressao);

  return 0;
}

void validate(const string expressao)
{
  char corresp;

  for (char caracter : expressao)
  {
    if (caracter == '(' || caracter == '[' || caracter == '{')
    {
      cout << "PUSH " << caracter << endl;
      push(caracter);
    }
    else if (caracter == ')' || caracter == ']' || caracter == '}')
    {
      switch (caracter)
      {
      case ')':
        corresp = '(';
        break;
      case '}':
        corresp = '{';
        break;
      case ']':
        corresp = '[';
        break;
      }

      if (pilha[topo] == corresp)
      {
        cout << "POP " << caracter << endl;
        pop();
      }
      else
      {
        cout << "Equacao invalida!" << endl;
        return;
      }
    }
  }

  if (topo != -1)
  {
    cout << "A expressao esta invalida!" << endl;
  }
  else
  {
    cout << "A expressao esta valida!" << endl;
  }
}

void push(char value)
{
  topo++;
  pilha[topo] = value;
}

void pop()
{
  topo--;
}
