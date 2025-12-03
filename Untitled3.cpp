#include<iostream>
using namespace std;

class rectangle{
	private:
		int length;
		int breadth;
		
	public:
		//setter funtion is use for length and breath
		void setlength(int len){
			length=len;
		}
		void setbreadth(int brea){
		       breadth=brea;
			   	
		}	
			
			//getter funtion is use for length and breath
		int getlenght(){
			return length;
			
		}
		 int getbreadth(){
		 	
		 	return breadth;
		 	
		 }
		
		
		
		
		int area(){
			
			return length*breadth;
			
		}
};



 int main(){

  rectangle obj;
  
     obj.setlength(8);
     obj.setbreadth(6);
     
     cout<<"lenght"<<endl;
      obj.getlenght();
    cout<<"breath"<<endl;
      obj.getlenght();
      
     cout<<"Area"<<endl;
	  obj.area();
	  
	   return 0;
	   
      





}
