#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n, m, k;
        cin >> n >> m >>k;
        string a, b, c;
        cin >> a >> b;
        sort(a.begin(), a.end(), greater<char>());
        sort(b.begin(), b.end(), greater<char>());

        int ak = 0, bk = 0;
        while( (!a.empty()) && (!b.empty()) )
        {
            bool g = b.back() < a.back();
            if (bk == k)
            {
                g = false;
            }
            if (ak == k)
            {
                g = true;
            }
            if (g && bk < k)
            {
                c.push_back(b.back());
                bk++;
                ak=0;
                b.pop_back();
            }
            else if(!g && ak < k)
            {
                c.push_back(a.back());
                ak++;
                bk=0;
                a.pop_back();
            } 
        }
        cout << c << endl;
    }
    return 0;
}