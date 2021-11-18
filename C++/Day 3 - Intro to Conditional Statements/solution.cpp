#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N % 2 == 0)
    {
        if  (N < 6 or N > 20)
        {
            cout << "Not Weird";
            return 0;
        }
        else
        {
            cout << "Weird";
            return 0;
        }
    }
    else
    {
        cout << "Weird";
        return 0;
    } 
    return 0;
}
