#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> freeq(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        int episode;
        cin >> episode;

        freeq[episode] = 1;
    }

    int notWatched = -1;
    for (int i = 1; i <= n; i++)
    {
        if (freeq[i] == 0)
        {
            notWatched = i;
            break;
        }
    }

    cout << notWatched << endl;

    return 0;
}
