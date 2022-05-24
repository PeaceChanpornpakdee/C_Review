#include <iostream>
using namespace std;

void PrintArray(int *arr)
{
  cout << "*****" << endl;
  cout << sizeof(arr) << endl;
  cout << sizeof(arr[0]) << endl;
  cout << "*****" << endl;
}

int main() 
{
  cout << "-------1D-------\n"; 
  int a[10] = {0};

  for(int i=0; i<10; i++)
  {
      cout << a[i] << endl;
  }

  cout << a[10] << endl;

  PrintArray(a);

  cout << "--------------\n"; 

  int b[10];

  for(int i=0; i<10; i++)
  {
      cout << b[i] << endl;
  }

  cout << "--------------\n"; 

  for(int i=0; i<15; i++)
  {
      b[i] = i;
      cout << b[i] << endl;
  }

  cout << "--------------\n"; 

  cout << b[14] << endl;

  return 0;
}