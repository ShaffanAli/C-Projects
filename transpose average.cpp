#include<iostream>
using namespace std;
int main(){
	int arr2[4][3],arr1[3][4]={90,85,95,88,80,75,82,78,95,92,88,90};
	cout<<"Original Matrix(students x assignments):"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr1[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			arr2[j][i]=arr1[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
		cout<<arr2[i][j]<<"  ";	
		}
		cout<<endl;
	}
	
}