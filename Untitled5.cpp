#include<iostream>
using namespace std;

  class animal{
  	 public:
  	string kingdom;
  	
  	 void sleep(){
  	 	
  	 	cout<<"I can sleep"<<endl;
  	 	
	   }
  	 void eat(){
  	 	cout<<"I can Eat"<<endl;
	   }
  	 
  };
  
     class snake :public animal{
     	public:
     		
     		void bite(){
     			cout<<"I can bite "<<endl;
     			
     			
			 }
			 
			 
			 
	 };
   
   
     int main(){
     	 int kingdom;
     	animal ani;
     	snake sna;
     	
     	cout<<"Enter your kindgom"<<endl;
     	cin>>sna.kingdom;
     	 
		  sna.eat();
		  sna.sleep();
		  sna.bite(); 
     	  
     	  ani.eat();
     	ani.sleep();
     	
     	
     	
     	
	 }
