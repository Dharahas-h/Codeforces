#include <iostream>
using namespace std;

int reqVotes(int va, int comp)
{
    if (va > comp)
        return 0;
    else
        return comp - va + 1;
}

int max(int x, int y)
{
    int c = x - y;
    if (c >= 0)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int nftc;
    cin >> nftc;
    while (nftc)
    {
        nftc--;
        int a, b, c;
        cin >> a >> b >> c;
        int a_r, b_r, c_r;
        a_r = reqVotes(a, max(b, c));
        b_r = reqVotes(b, max(a, c));
        c_r = reqVotes(c, max(a, b));
        cout << a_r << " " << b_r << " " << c_r << "\n";
    }

    return 0;
}
