/*
Inverted Half Pyramid

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
    for(int i = n; i > 0; i--)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}