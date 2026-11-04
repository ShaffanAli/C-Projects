#include<iostream>
#include<string>
using namespace std;
int main(){
    char choice,delivery;
    int o,q;
    double total = 0;
    int quantity[10]={0,0,0,0,0,0,0,0,0,0};
    string menu[5]={"Burger","pizza","Fries","soda","Icecream"};
    double price[5]={5.99,8.49,2.99,1.99,3.50};
    cout<<"*** Welcome to Munchy's Online Ordering***"<<endl<<endl;
    for(int i=0;i<5;i++){
        cout<<i+1<<". "<<menu[i]<<"- $"<<price[i]<<endl; 
    }
    cout<<endl;
    do{
        cout<<"Enter item number to order(1-5): ";
        cin>>o;
        cout<<"Enter quantity for "<<menu[o-1]<<": ";
        cin>>q;
        quantity[o-1] = quantity[o-1] + q;
        cout<<"Do you want to add more items? (y/n): ";
        cin>>choice;
        cout<<endl;
    }while(choice=='y'||choice=='Y');
    cout<<"Choose delivery (d) or pickup (p): ";
    cin>>delivery;
    cout<<endl;
    cout<<"=== Order Summary ==="<<endl;
    for(int i=0;i<10;i++){
        if(quantity[i]>0){
            cout<<menu[i]<<" x"<<quantity[i]
                <<" = $"<<price[i]*quantity[i]<<endl;

            total=total+(price[i]*quantity[i]);
        }
    }
    if(delivery=='d'||delivery=='D'){
        cout<<"Delivery fee: $3"<<endl;
        total=total+3;
    }
    cout<<"Total: $"<<total<<endl;
    cout<<"Thank you for ordering with Munchy's"<<endl;
    return 0;
}