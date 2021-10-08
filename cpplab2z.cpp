#include <iostream>
using namespace std;

int main()
{


	double a1, a2, a3;   //координати першого вектор
	double b1, b2, b3;   //координати другого  вектор
	cout << "a1="; cin >> a1;
	cout << "a2="; cin >> a2;
	cout << "a3="; cin >> a3;
	cout << "b1="; cin >> b1;
	cout << "b2="; cin >> b2;
	cout << "b3="; cin >> b3;
    
	if ((a1 / b1 == a2 / b2) and (a2 / b2 == a3 / b3))
	{
		cout << "vectors are collinear";
	}
	else
	{
		cout << "vectors are non-collinear";
	}
        
}

