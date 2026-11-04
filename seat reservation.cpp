#include<iostream>
using namespace std;
int main(){
	char arr[5][5],ch;
	int rs,f,r,c;
	int c1=0,c2=0,c3=0,t=0;
	cout<<"SEAT MATRIX:"<<endl<<"____________________"<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			arr[i][j]='O';
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	do{
	cout<<"ENTER 1 for seat reservation"<<endl<<"2 for count of each type of professional attending the event"<<endl<<"3 for count of available seats"<<endl<<"or exit by any key:"<<endl<<endl;
	cin>>ch;
	if(ch=='1'){
		cout<<"How many seats you want to reserve?: ";
		cin>>rs;
		for(int i=1;i<=rs;i++){
			cout<<"reserve seat "<<i<<" for:"<<endl<<"1 for finance"<<endl<<"2 for marketing"<<endl<<"3 for eng:"<<endl<<endl;
			cin>>f;
			if(f==1){
				cout<<"enter row and column:"<<endl;
				cin>>r>>c;
			if(arr[r][c]=='O'){
				arr[r][c]='F';
			}
			else
			cout<<"seat already Occupied"<<endl;
		}
			if(f==2){
				cout<<"enter row and column:"<<endl;
				cin>>r>>c;
				if(arr[r][c]=='O'){
					arr[r][c]='M';
				}
				else
				cout<<"seat already Occupied"<<endl;
		
			}
			if(f==3){
				cout<<"enter row and column:"<<endl;
				cin>>r>>c;
			if(arr[r][c]=='O'){
				arr[r][c]='E';
			}
			else
			cout<<"seat already Occupied"<<endl;
			}
		}
		cout<<"AFTER SEAT RESERVATION:"<<endl;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	}
	else if(ch=='2'){
		for(int i=0;i<5;i++){
			for(int j=0;j<=5;j++){
				if(arr[i][j]=='F'){
					c1+=1;
				}
				else if(arr[i][j]=='M'){
					c2+=1;
				}
				else if(arr[i][j]=='E'){
					c3+=1;
				}
			}
		}
		cout<<"NUMBER OF Finance team:"<<c1<<endl;
		cout<<"NUMBER OF MARKETING team:"<<c2<<endl;
		cout<<"NUMBER OF Engineering team:"<<c3<<endl;
		cout<<endl;
	}
	else if(ch=='3'){
		for(int i=0;i<5;i++){
			for(int j=0;j<=5;j++){
			if(arr[i][j]=='F'||arr[i][j]=='M'||arr[i][j]=='E'){
				t+=1;
				}
			}
		}
		cout<<"Remaining avaible seats= "<<25-t;
		cout<<endl;
	}
}
	while(ch=='1'||ch=='2'||ch=='3');
}