#include<iostream>
using namespace std;
int main(){
	int arr1[10], arr2[10];
	cout<<"Enter 10 integer ratings:"<<endl;
	for(int i=0;i<10;i++){
		cout<<"Rating "<<i+1<<": ";
		cin>>arr1[i];
	}
	for(int i=0;i<10;i++){
		arr2[i]=arr1[9-i];
	}
	cout<<endl<<"Reversed rating: ";
	for(int i=0;i<10;i++){
		cout<<arr2[i]<<" ";
	}
}