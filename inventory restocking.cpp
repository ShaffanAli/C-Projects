#include<iostream>
#include<string>
using namespace std;
int main(){
	string productnames[5]={"Apples","Oranges","Banana","Bread","Milk"};
	int quantities[5]={20,30,40,15,25};
	int n=10,restock,a;
	string productname;
	for(int i=0;i<5;i++){
		cout<<i+1<<". "<<productnames[i]<<" Quantity: "<<quantities[i]<<endl;
	}
	do{
	cout<<"Enter the name of the product you want to restock: ";
	getline(cin, productname);
	for(int i=0;i<5;i++){
	if(productnames[i]==productname){
		n=i;
		break;
	}}
	 if(n==10){
		cout<<"Item is not in our inventory!"<<endl;
		break;
	}
	cout<<endl<<"Enter the quantity you want to restock: ";
	cin>>restock;
	quantities[n]+=restock;
	cout<<endl<<"Restock successful!"<<endl;
	cout<<"Product: "<<productname<<endl;
	cout<<"New quantity: "<<quantities[n]<<endl;
	cout<<"Do you want to restock another product?"<<endl<<"1.Yes"<<endl<<"2.No:"<<endl;
	cin>>a;
	cin.ignore();
	}	while(a==1);
	cout<<endl<<"New inventory!"<<endl;
	for(int i=0;i<5;i++) {
    	cout<<i+1<<". "<<productnames[i]<<" Quantity: "<<quantities[i]<<endl;
    }
}