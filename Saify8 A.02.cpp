#include<iostream>
using namespace std;
int main()
{
	 int a,b,result;//declear two variable of int data type 

	 a=10,b=5;//Assignment operator

	 a+=b; //it will be the sum of a and b and stored also in a

	 cout<<"sum of two numbers is ="<<a<<endl;//printing the result
 
	 a-=b; //it will be the difference of two variables and stored in a also
	
	cout<<"Difference of two numbers is ="<<a<<endl;//printing the result
 
	a*=b;//it will multiply a nd b and stored also in a
	
	cout<<"Multiplication of two numbers is ="<<a<<endl;//printing the result 

	a/=b;//it will divide a by two and stored value also in a
	
	cout<<"Divison of two numbers is ="<<a<<endl;//printing the result 
	
	 result=(a<b) && (a>b);//Logical operator

	 cout<<result<<endl;//if both are true, the result will be 1 which means true
	
	 result=(a>b) || (a<b);//Logical operator

	 cout<<result<<endl;//if one is true, the answer will be 1 which means true
	
	result=!(a>b);//Logical operator

	 cout<<result<<endl;//it will reverse the answer
		
	return 0;
}
