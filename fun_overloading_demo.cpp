#include<iostream>
using namespace std;
/*
    Function overloading - In c++, we can have multiple function but 
    signature is different.
    		signature:- 
    			1) Number of argument 
    			2) Data type of argument 
    			3) Sequence of argument
    		return type do not contribute to signature of a function
*/
int add(int a, int b){
	return a+b;
}
int add(int a, int b , int c){
	return a+b+c;
}
float add(int a, float b){
	return a+b;
}
float add(float a, int b){
	return a+b;
}

int main()
{
	cout<<add(10,20)<<endl;
	cout<<add(10,20,30)<<endl;
	cout<<add(10,20.5f)<<endl;
	cout<<add(10.2f,20)<<endl;
	return 0;
}
