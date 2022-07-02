#include <iostream>
using namespace std;

int main()
{
    int nftc;
    cin >> nftc;
    while (nftc)
    {
        nftc--;
        int P;
        cin >> P;
        cout << 2 << " ";
        cout << P - 1;
        cout << "\n";
    }
}
