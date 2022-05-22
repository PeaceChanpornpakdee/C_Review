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

  int s = 0;
  while(true)
  {
    cout << s << endl;
    s += 1;
    if(s > 10) break;
  }
    
  return 0;
}