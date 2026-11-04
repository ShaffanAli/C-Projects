#include<iostream> 
using namespace std; 
int main(){ 
 cout<<"Inverted right angle triangle:"<<endl; 
 for(int i=5;i>=1;i--){ 
   for(int j=1;j<=i;j++){ 
    cout<<"*"; 
   } 
   cout<<endl; 
  } 
 cout<<"Hollow square:"<<endl; 
 for (int i=1;i<=5;i++){ 
        for (int j=1;j<=5;j++){ 
            if (i==1 || i==5 || j==1 || j==5){ 
                cout <<"*"; 
            } 
            else{ 
                cout <<" "; 
            } 
        } 
        cout << endl; 
SHAFFAN ALI (02-134262-043) 
 
    } 
    cout<<"Combination of both: "<<endl; 
    for(int i=1;i<=5;i++){ 
   for(int j=1;j<=i;j++){ 
    cout<<"*"; 
   } 
 for (int j=i;j<=4;j++){ 
            cout <<" "; 
        } 
        for (int j=1;j<=5;j++){ 
            if (i==1 || i==5 || j==1 || j==5){ 
                cout <<"*"; 
            } 
            else{ 
                cout <<" "; 
            } 
        } 
        cout << endl; 
    } 
} 