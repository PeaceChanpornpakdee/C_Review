#include <iostream>
using namespace std;

int combine(int a, int b)
{
    a = 10;
    return a + b;
    a = 0;
}

void swap(int &c, int &d); //Pass by Reference

int main() 
{
  int a = 1;
  int b = 2;
  cout << a << " + " << b << " = " << combine(a, b) << endl;
  cout << a << endl;
  
  cout << combine(1.1, 2.2) << endl;
  // cout << combine("A", "B") << endl;

  // { int c = 999; }
  // cout << c << endl;

  swap(a, b);
  cout << a << " , " << b << endl;

  return 0;
}

void swap(int &c, int &d)
{
  int e = c;
  c = d;
  d = e;
}