#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers :"<<endl;
	cin>>a>>b;
	cout<<"Values before swapping "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"Values after swapping "<<a<<" "<<b<<endl;
}
