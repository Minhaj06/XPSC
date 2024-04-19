#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    string str_N = to_string(N);

    int leading_zeros = 4 - str_N.length();

    for (int i = 1; i <= leading_zeros; i++)
        cout << "0";

    cout << str_N << endl;

    return 0;
}
