#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<string>> words(3, vector<string>(n));
        unordered_map<string, vector<int>> wordCount;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> words[i][j];
                wordCount[words[i][j]].push_back(i);
            }
        }

        vector<int> points(3, 0);
        for (auto pair : wordCount)
        {
            if (pair.second.size() == 1)
            {
                points[pair.second[0]] += 3;
            }
            else if (pair.second.size() == 2)
            {
                for (int person : pair.second)
                {
                    points[person] += 1;
                }
            }
        }

        for (int i = 0; i < 3; i++)
            cout << points[i] << " ";

        cout << endl;
    }

    return 0;
}
