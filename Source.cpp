//Даниил Журавлёв
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	//variant 3(my)
	/*const int n = 5;
	int arr[n][n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand() % 61 - 30;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << arr[i][j] << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i][i] > 0) {
			cout << arr[i][i] << ' ';
		}
	}*/
	//variant 1
	/*const int n = 3;
	const int m = 5;
	int mas[n][m];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 41 - 20;
		}
	}
	cout << "matrix\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j] << ' ';
		}
		cout << endl;
	}
	int k, a=0;
	cout << "enter r number\n";
	cin >> k;
	for (int p = 0; p < n; p++) {
		a += mas[p][k];
	}
	cout << a << endl;*/
	return 0;
}