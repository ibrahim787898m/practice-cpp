#include <iostream>
using namespace std;

int main()
{
  int x, y;
  char op;

  cout << "operator: ";
  cin >> op;

  cout << "x: ";
  cin >> x;

  cout << "y: ";
  cin >> y;

  if (op == '+')
  {
    cout << "answer: " << x + y << "\n";
    return 0;
  }
  else if (op == '-')
  {
    cout << "answer: " << x - y << "\n";
    return 0;
  }
  else if (op == '*')
  {
    cout << "answer: " << x * y << "\n";
    return 0;
  }
  else if (op == '/')
  {
    cout << "answer: " << x / y << "\n";
    return 0;
  }
  else
  {
    cout << "invalid operator";
    return 0;
  }

  return 0;
}
