#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for (size_t j = 0; j < t ; j++)
    {
        int n;
        cin >> n;
        int x = -1;
        for (size_t i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            if (i != in)
            {
                x = x & in;
            }
        }
        cout << x << endl;
    }
    return 0;
}