#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nftc;
    cin >> nftc;
    while (nftc)
    {
        nftc--;
        int len;
        cin >> len;
        string s;
        cin >> s;

        if (len > 2)
        {
            cout << "NO"
                 << "\n";
        }
        else if (((s[0] == '1') && (s[1] == '1')) || ((s[0] == '0') && (s[1] == '0')))
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}