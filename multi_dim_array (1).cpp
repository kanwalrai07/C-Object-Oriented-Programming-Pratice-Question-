#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double my_result[5][5]={{65,56,76},
					 {34,65,78},
					 {45,67,5},
					 {56,76,45},
					 {76,45,65}};
	double sum;
    char my_grade[5];
    string name[5]={"Ali","Raza","Saddam","Sufian","Farah"};
    for(int a=0;a<5;a++){
    	sum=0;
		for(int i=0;i<5;i++){
			sum+=my_result[a][i];
		}
			my_result[a][3]=sum;
			my_result[a][4]=(my_result[a][3]/300*100);
			
			if(my_result[a][4]>50)
				my_grade[a]='A';
			if(my_result[a][4]==50)
				my_grade[a]='B';
			if(my_result[a][4]<50)
				my_grade[a]='C';
	}	
	for(int x=0;x<5;x++){
		cout<<name[x];
		for(int y=0;y<5;y++){
			cout<<setw(10)<<my_result[x][y]<<" ";
		}
		cout<<setw(8)<<my_grade[x];
		cout<<endl;
}
}
		
