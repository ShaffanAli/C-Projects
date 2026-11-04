#include<iostream> 
using namespace std; 
int main(){ 
cout<<"ASCII Table for A-Z:"<<endl; 
for(int i=65;i<=90;i++){ 
cout<<"ASCII Value: "<<i<<", Character: "<<char(i)<<endl; 
} 
cout<<"ASCII Table for a-z:"<<endl; 
for(int i=97;i<=122;i++){ 
cout<<"ASCII Value: "<<i<<", Character: "<<char(i)<<endl; 
} 
}