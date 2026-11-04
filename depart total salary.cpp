#include<iostream>
#include <string> 
using namespace std; 
int main() { 
    int d, e, salary; 
    int totalSalary = 0; 
    string name, des; 
    cout << "Enter number of departments: "; 
    cin >> d; 
    for (int i = 1; i <= d; i++) { 
        cout << "\nData for department " << i << endl; 
        cout << "Enter number of employees: "; 
        cin >> e; 
        cin.ignore(); 
        for (int j = 1; j <= e; j++) { 
            cout << "Enter Name: "; 
            getline(cin, name); 
            cout << "Enter Designation: "; 
            getline(cin, des); 
            cout << "Enter Salary: "; 
            cin >> salary; 
            totalSalary = totalSalary + salary; 
            cin.ignore(); 
} 
} 
cout << "\nTotal department salary = " << totalSalary << endl; 
return 0; 
}