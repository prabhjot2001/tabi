#include <bits/stdc++.h>
using namespace std;

/*
             *
            ***
           *****
          *******
         *********
 */

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==(n/2+1))
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}