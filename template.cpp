#include<iostream>
using namespace std;

template<typename T>                      // function with single template argument 
void Swap(T a, T b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;
}
template<typename T, typename U>        // function with multiple template argument 
T add(T a, U b)
{
	return a+b;
} 
int main()
{
	Swap(12,24);
	Swap("first", "second");
	Swap(3.4f, 1.1f);
	
	cout<<add(2.2,1)<<endl;
	
	return 0;
}
