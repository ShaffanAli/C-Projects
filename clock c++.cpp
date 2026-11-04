#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, p, n = 5 , original[5] = { 1,2,3,4,5 };
	char d;

	cout << "Original Array: ";
	for (int i = 0;i < 5;i++) {
		cout << original[i]<<" ";
	}
	cout << "\n\nEnter direction (L/R): ";
	cin >> d;
	cout << "Enter number of positions: ";
	cin >> p;
	if (d == 'L' || d == 'l') {
		for (int i = 0; i < p; i++) {
			int first = original[0];
			for (int j = 0; j < n - 1; j++) {
				original[j] = original[j + 1];
			}
			original[n - 1] = first;
		}
		cout << "\nArray after rotating left by "
			<< p << " positions: ";
	}
	else if (d == 'R' || d == 'r') {
		for (int i = 0; i < p; i++) {
			int last = original[n - 1];
			for (int j = n - 1; j > 0; j--) {
				original[j] = original[j - 1];
			}
			original[0] = last;
		}
		cout << "\nArray after rotating right by "
			<< p << " positions: ";
	}
	else {
		cout << "Invalid direction!";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << original[i] << " ";
	}
	cout << endl;
	return 0;
}
