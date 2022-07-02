#include <bits/stdc++.h>
#include <iterator>
#include <map>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map<int, vector<int>> branch; 
    for (size_t i = 0; i < n; i++)
    {
        int key, value;
        cin >> key >> value;
        branch[key].push_back(value);
    }
    /*int level[n];
    bool marked[n];
    level[1 - 1] = 0;
    marked[0] = true;
    for (auto i = branch.begin(); i != branch.end(); i++)
    {
        for (size_t j = 0; j < (i -> second).size(); j++)
        {
            if (!marked[(i -> first)])
            {
            level[(i -> second)[j] - 1] = level[(i -> first) -1] + 1;
            marked[(i -> second)[j] - 1] = true;
            }
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << level[i] << "\n";
    }*/
}
