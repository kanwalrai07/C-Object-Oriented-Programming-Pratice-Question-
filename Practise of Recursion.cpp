          //factorial//

//#include <iostream>
//using namespace std;
//long fact(int n ){
//	if (n==0){
//		return 1;
//	}
//	return(n*fact(n-1));
//}
//int main(){
//	int num;
//	cout << "enter the number ";
//	cin >> num;
//	cout << "factorial of"<<"\t"<<num <<"\t"<< "is="<<fact(num);
//}


         //power of the number //
         
//#include <iostream>
//using namespace std;
//
//int Power(int x , int n){
//	if (n==0)
//		return 1;
//	else
//		 return x*Power(x,n-1);
//}
// int main(){
//	int num,x,n;
//	cout << "enter the value of x ";
//	cin >> x ;
//	cout<<"enter the value of n";
//	cin>> n;
//	cout<<"the power of number"<<"is"<<Power(x,n);
//}

            //sum of the series //
//#include <iostream>
//using namespace std;
//int sum(int n){
//	if (n==0){
//		return 0;
//	}
//	else{
//		return n+sum(n-1);
//	}
//}
//int main(){
//	int num;
//	cout << "enter the number ";
//	cin >> num ;
//	cout << "sum of"<<"\t"<<num <<"\t"<<"is equal to"<< "\t"<<sum(num);
//}


              //fabonacci number//
#include <iostream>
using namespace std;
int fab(int n){
	if(n==0){
		return 0;
	}
	else 
	return n=(n-1)+(n-2);
}   
int main (){
	int num;
	cout << "enter the number";
	cin >> num;
	cout << "fab of " << "\t" << num << "\t" <<"number"<<"\t"<< "is" <<"\t"<< fab(num);
}           
