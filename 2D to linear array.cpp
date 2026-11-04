#include<iostream>
using namespace std;
int main(){
	cout<<"ENTER ARRAY ELEMENTS"<<endl;
	int arr[3][3],a[6];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"ARRAY 2D"<<endl;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int k=0;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		a[k]=arr[i][j];
		k++;
		}
	}
	cout<<"LINEAR ARRAY"<<endl;
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	}
}