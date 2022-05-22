#include <iostream>
using namespace std;

int main() 
{
  cout << "----------INT----------"<< endl;

  int a = 2147483647;    cout << a << endl;
      a = 2147483648;    cout << a << endl; //Overflow
      a = 2147.483648;   cout << a << endl; 

  cout << "---------FLOAT---------"<< endl;

  float b = 11.0;        cout << b << endl;
        b = 11 / 2;      cout << b << endl;
        b = 11 / 2.0;    cout << b << endl;
        b = 11.0 / 2;    cout << b << endl;
        b = int(b);      cout << b << endl; //Type Casting
        b = 11.1 * 2;    cout << b << endl;
        b = (int)b;      cout << b << endl; //Type Casting

  cout << "-------BOOLEAN-------"<< endl;

  bool c = true;         cout << c << endl;
                         cout << boolalpha;
       c = true;         cout << c << endl; 
       c = !c;           cout << c << endl; //Bitwise Operator - NOT
       c = c & true;     cout << c << endl; //Bitwise Operator - AND
       c = c | true;     cout << c << endl; //Bitwise Operator - OR

  cout << "---------EXTRA----------"<< endl;

  int d = 255;             cout << d << endl; 
      d = d & 0b00001111;  cout << d << endl; //Bitwise Operator - AND
      d = d | 0b00010000;  cout << d << endl; //Bitwise Operator - OR
      d = d << 1;          cout << d << endl; //Bitwise Operator - LEFT SHIFT
      d = d >> 2;          cout << d << endl; //Bitwise Operator - RIGHT SHIFT

  return 0;
}