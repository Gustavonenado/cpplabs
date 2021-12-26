#include <iostream>

using namespace std;

double Cnk(int N, int K)
{
    return  ((K == 0) ? 1 : ((double(N) - double(K) + double(1)) / double(K) * Cnk(N, K - 1)));
}

int main()
{
    int n;
    cin >> n;

    for (int j = 0; j <= n; j++)
    {
        for (int i = 0; i <= j; i++)
            cout << Cnk(j, i) << " ";
        cout << "\n";
    }
    return 0;
}

