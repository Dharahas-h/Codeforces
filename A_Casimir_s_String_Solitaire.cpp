#include <iostream>
#include <string>
using namespace std;

int getlen(char s, string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == s)
            count++;
    }
    return count;
}

int main()
{
    int nftc;
    cin >> nftc;
    while (nftc--)
    {
        string str;
        cin >> str;
        char a = 'A';
        int Alen = getlen('A', str);
        int Blen = getlen('B', str);
        int Clen = getlen('C', str);
        if (Alen + Clen == Blen)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
}