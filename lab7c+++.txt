#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>

using namespace std;



void fill_a(int M[], int k) {
	cout << "Enter your array: ";
	for (int i = 0; i < k; i++) {
		cin >> M[i];
	}
}

void output_a(int M[], int k) {
	cout << "array is: ";
	for (int i = 0; i < k; i++) {
		cout << M[i] << ' ';
	}
}
  


int main()
{
	int k; cout << "Enter the size of your array: "; cin >> k;
	int* M = new int[k];
	double r;
	bool flag = true;
	fill_a(M, k);
	output_a(M, k);
	cout << endl;
	double q = M[1] / M[0];
	for (int i = 1; i < k-1; i++) {
		if (((double)M[i + 1] / M[i]) != q) {
			flag = false;
		}
	}
	if (flag) {
			cout <<"denominator = " << q << endl;

		}
		else {
		r = ((double)M[0] + M[k-1]) / 2 ;
		cout << "average = " << r << endl;
		for (int i = 1; i < k; i+=2) {
			M[i] = r;
		}
		output_a(M, k);

		}
	


	return 0;
}
