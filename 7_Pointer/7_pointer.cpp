#include <iostream>
using namespace std;

//Function Overloading

void show(int *c) //Passing Pointer 
{
    cout << "* " << c << " *" << endl;
}

void show(int &d) //Pass by Reference
{
    d = 5555;
    cout << "^ " << d << " ^" << endl;
}

void show(char e) //Pass by Value
{
    e = '$';
    cout << "- " << e << " -" << endl;
}

int main() 
{
  int a  = 10;
  int *p = &a; 
  cout << p << " : " << a << endl;
  a = 999999;
  cout << p << " : " << a << endl;
  show(p);
  cout << endl;

  int q[10];
  show(q);
  cout << q << '\n' << endl;

  cout << a << '\n';
  show(a);
  cout << a << '\n' << endl;

  char r = 'S';
  show(r);
  cout << r << '\n' << endl;

  return 0;
}