#include <iostream>
using namespace std;

int main() 
{
  for(int i=1; i<10; i+=2)
  {
    cout << "- " << i << endl;
  }
//   cout << i;
  int i = 9;
  while(i < 12)
  {
      cout << "* " << i << endl;
      i++;
  }

  while(i < 15)
  {
      cout << "# " << i << endl;
      i++;
  }
  return 0;
}