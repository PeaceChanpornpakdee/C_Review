#include <iostream>
using namespace std;

int main() 
{
    int a = 3;

    if(a < 0)
    {
        cout << "Negative" << endl;
    }
    else if(a == 0)
    {
        cout << "Zero" << endl;
    }
    else if(a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    return 0;
}