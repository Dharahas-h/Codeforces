#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin >> t;
    for (size_t j = 0; j < t; j++)
    {
        int n; cin >> n;
        int pile[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> pile[i];  
        }
        if (n % 2 == 1) 
        {
            cout << "Mike\n";
            continue;
        }
        int smallest = 0;
        
        for (int i = 0; i<n; i++)
        {
            if (pile[i] < pile[smallest]) smallest = i;
        }

        if (smallest % 2 == 0) cout << "Joe\n";
        else cout << "Mike\n";
    }
    return 0;
}