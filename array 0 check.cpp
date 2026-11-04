#include <iostream>
using namespace std;
int main() {
    int arr1[50], arr2[50];
    int n, hasZero;
    for (int k = 1; k <= 3; k++) {
        cout << "Enter array elements (enter '0' to terminate input):" << endl;
        n = 0;
        hasZero = 0;
        while (true) {
            cin >> arr1[n];
            if (arr1[n] == 0)
                break;
            n++;
        }
        for (int j = 0; j < n; j++) {
            if (arr1[j] == 0) {
                hasZero = 1;
                break;
            }
        }
        if (hasZero == 0) {
            for (int j = 0; j < n; j++) {
                arr2[j] = arr1[j];
            }
            cout << "\nArray with no zero values: ";
            for (int j = 0; j < n; j++) {
                cout << arr2[j] << " ";
            }
            cout << endl;
            return 0;
        }
    }
    cout << "\nNo array without zero values found." << endl;
    return 0;
}