#include <iostream>
#include <stack>
using namespace std;

void validate(const string &);

int main()
{
  string expressao = "((2+3)*(5/3)";
  validate(expressao);

  return 0;
}

void validate(const string &expressao)
{
  int topo = -1;

  for (char caracter : expressao)
  {
    if (caracter == '(')
    {
      cout << "PUSH" << endl;
      topo++;
    }
    else if (caracter == ')')
    {
      cout << "POP" << endl;
      topo--;
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
