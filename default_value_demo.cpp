#include<iostream>
using namespace std;
int add(int, int, int=0, int=0 , int=0);
int main()
{
	cout<<add(1,2,3,4,5)<<endl;
	cout<<add(1,2,3,4)<<endl;
	cout<<add(1,2,3)<<endl;
	cout<<add(1,2)<<endl;
	
	return 0;	
}
int add(int a, int b, int c, int d , int e)
{
	return a+b+c+d+e;
}
