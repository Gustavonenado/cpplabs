#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int** Fill_Matrix(int** DMatrix ,int n) {
	for (int i = 0; i < n; i++) {
		DMatrix[i] = new int	 [n];
		for (int j = 0; j < n; j++) {
			DMatrix[i][j] = (int)(rand() % 100);
		}
	}
	return DMatrix;
}

void output_Matrix(int** EMatrix, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << EMatrix[i][j] << ' ';
		}
		cout << endl;
	}
}

int** Solving_BMatrix(int** AMatrix, int n) {
	int** BMatrix = new int* [n];
	for (int i = 0; i < n; i++) {
		BMatrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) {
				BMatrix[i][j] = (AMatrix[i + 1][j] + AMatrix[i][j + 1]) / 2;
			}
			if (i == n - 1 && j == 0) {
				BMatrix[i][j] = (AMatrix[i - 1][j] + AMatrix[i][j + 1]) / 2;
			}
			if (i == 0 && j == n - 1) {
				BMatrix[i][j] = (AMatrix[i][j - 1] + AMatrix[i + 1][j]) / 2;
			}
			if (i == n - 1 && j == n - 1) {
				BMatrix[i][j] = (AMatrix[i - 1][j] + AMatrix[i][j - 1]) / 2;
			}
			if (i > 0 && i < n - 1 && j == 0) {
				BMatrix[i][j] = (AMatrix[i - 1][j] + AMatrix[i][j + 1] + AMatrix[i+1][j]) / 3;
			}
			if (i > 0 && i < n - 1 && j == n - 1) {
				BMatrix[i][j] = (AMatrix[i - 1][j] + AMatrix[i][j - 1] + AMatrix[i + 1][j]) / 3;
			}
			if (i == 0 && j > 0 && j < n-1) {
				BMatrix[i][j] = (AMatrix[i + 1][j] + AMatrix[i][j + 1] + AMatrix[i][j - 1]) / 3;
			}
			if (i == n-1 && j > 0 && j < n - 1) {
				BMatrix[i][j] = (AMatrix[i - 1][j] + AMatrix[i][j + 1] + AMatrix[i][j - 1]) / 3;
			}
			if (i > 0 && i < n-1 && j > 0 && j < n - 1) {
				BMatrix[i][j] = (AMatrix[i + 1][j] + AMatrix[i - 1][j] + AMatrix[i][j - 1] + AMatrix[i][j+1]) / 4;
			}
		}
	}
	return BMatrix;
}

int main()
{
	srand(time(NULL));
	int n; cout << "Enter size of your arrays: "; cin >> n;
	int** AMatrix = new int* [n];
	int** CMatrix = new int* [n];
	cout << "Generated Matrix A \n";
	AMatrix = Fill_Matrix(AMatrix, n);
	output_Matrix(AMatrix, n);
	cout << endl;
	cout << "Solved Matrix B \n";
	CMatrix = Solving_BMatrix(AMatrix, n);
	output_Matrix(CMatrix, n);


}

