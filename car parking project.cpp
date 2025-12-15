////////////////////CAR PARKING/////////
#include<iostream>
using namespace std;
int main(){
	 
      	int enter;
      int car=0,bike=0,rikshaw=0;
	cout<<"\t\t Railway station  "<<endl;
while(true){

     
	cout<<"Press 1 to Enter User login "<<endl;
	cout<<"Press 2 to Enter atleast 10 train"<<endl;
	cout<<"Press 3 to Enter atleast 10 stations"<<endl;
	cout<<"Press 4 to Enter booked tickets"<<endl;
	cout<<"Press 5 to Enter Pending "<<endl;
	cout<<"Press 6 to Cancelled ticket "<<endl;
	cin>>enter;
	if(enter==1){
		car++;
		system("CLS");
		cout<<"Car is Added"<<endl;
		
	}
	else if(enter==2){
		bike++;
		system("CLS");
		cout<<"Bike is added"<<endl;
		
	}
	else if(enter==3){
		rikshaw++;
		system("CLS");
		
		cout<<"rikshaw is added"<<endl;
		
	}
	else if(enter==4){
		cout<<"car"<<car<<endl;
		cout<<"bike"<<bike<<endl;
		cout<<"rikshaw"<<rikshaw<<endl;
		
	}
	else if(enter==5){
		car=1;
		bike=0;
		rikshaw=0;
		
	}
	else if(enter==6){
		exit(0);
		
	}
	else{
		cout<<"Invalid input"<<endl;
		
	}
}
} 
