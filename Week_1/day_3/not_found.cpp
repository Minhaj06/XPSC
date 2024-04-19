#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    unordered_set<char> letters;
    for (int c : S)
    {
        letters.insert(c);
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (letters.find(i) == letters.end())
        {
            cout << (char)i << endl;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}
