#include<iostream>
using namespace std ; 
// swap function by call by reference 
void swap(int &ra , int &rb)
{
	int temp ;
	temp=ra;
	ra=rb;
	rb=temp;
}
int main()
{
	int a=10, b=20;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	return 0; 
}
