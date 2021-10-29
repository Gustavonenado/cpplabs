#include <iostream>
#include <math.h>
using namespace std;

double factorial(int n) //рекурсивна ф-я розрахунку факторіала
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{

	long double x, ak, sk = 0, l = 0.00001; //x - змінна,ak - член прогресії, sk - сума k членів прогресії
	bool flag = true;
	cout << "x="; cin >> x; //ввід значення x
	int k = 0; //номер члена прогресії
	
	do
	{
		k = k ++;
		ak = pow(x, k) / factorial(2 * k);
		sk = sk + ak;
		if ((abs(ak) < l) && (k > 10))
		{
			flag = false;
		}
	} while (flag);
		
		
	cout << sk;

}
	




