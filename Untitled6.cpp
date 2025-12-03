#include<iostream>
using namespace std;
   
   class Head{
   	public:
   		void cock(){
   			 
   			 cout<<"I know cocking"<<endl;
   			 
   			
		   }
   	     void dance(){
   	     	
   	     cout<<"I Know dancing"<<endl;
				
   	     	
			}
   	      void sing(){
   	      	
   	      	cout<<"I Know singing"<<endl;
   	      	
   	      	
   	      	
			 }
   	      
   	      void teach(){
   	      	
   	      	cout<<"I Know teaching "<<endl;
   	      	
   	      	
   	      	
			 }
   	
   };
   
      class employe1: public Head{
      	public:
      		void football(){
      			
      			cout<<"I know football"<<endl;
      			
      			
			  }
      			
			  void flyplanes(){
			  	
			  	cout<<"i know fly planes"<<endl;
			  	
			  	
			  }
      };
      
      	   class employe2 :public Head{
      	   	      public:
      	   	      	
      	   	      void code(){
      	   	      	
      	   	      	 cout<<"I know football"<<endl;
      	   	      	
					   }
      	   	
      	   	
      	   	
			 };
			 
			 class employe3:public Head{
			 	  public:
			 	  	void shootguns(){
			 	  		
			 	  		cout<<"I konw Shoot guns "<<endl;
			 	  		
			 	  		
			 	  		
			 	  		
					   }
			 	  void repair(){
			 	  	
			 	  	cout<<"I know repair Electronics device "<<endl;
			 	  	
				   }
			 	
			 	
			 };
      	
	  
	  
	  
	  
	  
	  
	  int main(){
	  	
	  	Head head;
	  	employe1 A;
	  	employe2 B;
	  	employe3 C;
	  	
	  	cout<<"......Abilites Of Head......."<<endl;
	  	
	  	head.cock();
	  	head.sing();
	  	head.dance();
	  	head.teach();
	  	
	   cout<<"......Abilites Of Employe 1......."<<endl;
	   
	  	 A.cock();
	  	 A.sing();
	  	 A.dance();
	  	 A.teach();
	  	 A.football();
	  	 A.flyplanes();
	  	
	  	cout<<"......Abilites Of Employe 2......."<<endl;
	  	    
	  	 B.cock();
	  	 B.sing();
	  	 B.dance();
	  	 B.teach();
	  	 B.code();
	  	
	  	
	  	
	  	
	  	cout<<"......Abilites Of Employe 3......."<<endl;
	  	    
	  	 C.cock();
	  	 C.sing();
	  	 C.dance();
	  	 C.teach();
	  	 C.shootguns();
	  	 C.shootguns();
	  	 
	  	 
	  	 return 0;
	  	 
	  	 
	  } 
