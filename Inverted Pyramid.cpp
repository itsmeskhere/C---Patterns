/*
Inverted Pyramid

* * * * *
 * * * *
  * * *
   * *
    *

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter size of pyramid (n): ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for(int k = i; k <= n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}