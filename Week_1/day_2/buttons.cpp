#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B;
    cin >> A >> B;

    int maxCoins = max(A + A - 1, max(B + B - 1, A + B));

    cout << maxCoins << endl;

    return 0;
}
