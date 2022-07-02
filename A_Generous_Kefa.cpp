#include <iostream> 
#include <map>

using namespace std;

int main()
{   
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    map<char, int> mp;
    for (size_t i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    
    for (size_t j = 0; j < n; j++)
    {
        if (mp[s[j]] > k)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}

