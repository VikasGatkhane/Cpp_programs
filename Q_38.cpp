// multiply function for 2,3 ,4 integers passed 
#include<iostream>
using namespace std;
int multiply(int =1, int=1, int =1,int=1 );
int main()
{
	int a=2,b=3,c=4,d=7;
	cout<<"Multiplication is : "<<multiply(a,b)<<endl;
	cout<<"Multiplication is : "<<multiply(a,b,c)<<endl;
	cout<<"Multiplication is : "<<multiply(a,b,c,d)<<endl;
	return 0;
}
int multiply(int a, int b, int c, int d)
{
	return a*b*c*d;
}
