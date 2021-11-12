#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double a = 2,S = 2;
    int n;
    cout << "n="; cin >> n;

    for (int i = 0; i < n; i++)
    {
    a = pow(a,2) / (a + 3);
    S = S + a;
    }
    cout << S;
}

