#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int c;
        vector<int> pos;
        for (size_t i = 0; i < n; i++)
        {
            cin >> c;
            pos.push_back(c);
        }
        if (n==1)
        {
            cout << "-1\n";
            continue;
        }
        vector<int> num;
        for (size_t i = 0; i < n; i++)
        {
            num.push_back(i+1);
        }
        for (size_t i = 0; i < n-1; i++)
        {
            if (num[i] == pos[i])
            {
                int temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
        if (num[n-1] == pos[n-1])
        {
            int temp = num[n-1];
            num[n-1] = num[n-2];
            num[n-2] = temp;
        }
        for (size_t i = 0; i < n; i++)
        {
            cout << num[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
    