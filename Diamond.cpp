/*
Diamond

    *
   * *
  * * *
 * * * *
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
    cout << "Enter size of diamond (n): ";
    cin >> n;
    for(int i = 1; i < 2*n; i++)
    {
        if(i <= n)
        {
            for(int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for(int k = 1; k <= i; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for(int j = 1; j <= i-n; j++)
            {
                cout << " ";
            }
            for(int k = i; k < 2*n; k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}