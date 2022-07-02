#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,q;
    cin >> n >> q;
    int p[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p+n-1,greater<int>());
    for (size_t i = 0; i < q; i++)
    {
        int x,y;
        cin >> x >> y;
        int sum = 0;
        for (size_t i = 0; i < x; i++)
        {
            if (i >= x - y)
            {
                sum = sum + p[i];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
