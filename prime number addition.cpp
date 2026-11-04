#include<iostream> 
using namespace std; 
int main(){ 
 int n,count=0,total=0; 
 for(int i=1;i<=10;i++){ 
  count=0; 
  cout<<"Enter your "<<i<<" integer: "; 
  cin>>n; 
  for(int j=1;j<=n;j++){ 
   if(n%j==0){ 
   count++; 
  } 
  } 
   if(count==2){ 
    cout<<n<<" is a prime number"<<endl; 
    total+=n; 
  } 
 } 
 cout<<"Total= "<<total; 
} 