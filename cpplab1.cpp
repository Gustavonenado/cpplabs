//#include <math.h> 
#include <iostream>
using namespace std;

int main()
{

    
    double a, b;  //катети
    double S;     //площа трикутника
    cout << "a="; cin >> a; //введення першого катета
    cout << "b="; cin >> b; //введення другого катета 

    S = 0.5 * a * b; //обчислення площі
    cout << "\narea of a triangle S=" << S << endl; //виведення результату
}