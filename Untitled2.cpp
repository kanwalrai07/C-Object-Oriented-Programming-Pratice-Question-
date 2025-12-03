#include<iostream>
using namespace std;


class campare{
	public:
		void xyz(int n1,int n2){
			
			if(n1==n2){
				
				cout<<"Both number are Equal"<<endl;
					
			}
			else if (n1>n2){
				cout<<n1<<"is greter then"<<n2<<endl;
				cout<<n2<<"in smaller then"<<n1<<endl;
			}
		
		 else if (n2>n1){
		 	
		 	cout<<n2<<"is greter then"<<n1<<endl;
			cout<<n1<<"in smaller then"<<n2<<endl;
		 	
		 }
	
}	
	
};

int main (){
	
 campare numcampare;
   int num1,num2;
   
   cout<<"enter the number"<<endl;
   cin>>num1;
   cout<<"Enter the number "<<endl;
   cin>>num2;
   	
	
     numcampare.xyz(num1,num2);

	return 0;
	
}

