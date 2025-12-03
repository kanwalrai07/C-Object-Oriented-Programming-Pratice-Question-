#include<iostream>
using namespace std;

class student {
	public:
		string name;
		int age;
		string gender;
		int rollnumber;
		
		void obedenice(){
			cout<<name<<"\nis obedenice "<<endl;
		}
		
		void attensitive(){
			
			cout<<name<<"\nis attensitive"<<endl;
			
			
			
		}
		
		void neat(){
			
			
			cout<<name<<"\nis Neat "<<endl;
			
		}
};

int main (){
	student std1;
	std1.name="kanwal";
	std1.age=21;
	std1.gender="male";
	std1.rollnumber=42340068;
	
	student std2;
	std2.name="veena";
	std2.age=21;
	std2.gender="Female";
	std2.rollnumber=12342446;
	
	
	cout<<std1.name<<endl;
	cout<<std1.age<<endl;
	cout<<std1.gender<<endl;
	cout<<std1.rollnumber<<endl;
	
	
	cout<<std2.name<<endl;
	cout<<std2.age<<endl;
	cout<<std2.gender<<endl;
	cout<<std2.rollnumber<<endl;
	
	
	std1.obedenice();
	std2.attensitive();
	std2.neat();
	
}
