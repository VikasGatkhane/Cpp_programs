#include<iostream>
using namespace std;
/*
  Exception :- It is run time anomaly , try , catch and throw 
*/
class A
{
};

double divide(int num , int den)
{	
	A obj;
	if(den==0)
		throw 'x';
	return (double)num/den;
}
int main()
{
	try {
		cout<<divide(10,0)<<endl;
	}
	catch (int a)
	{
		cout<<"Denometer is zero "<<a<<endl;
	}
	catch(char const *b)
	{
		cout<<"char* - Denometer is zero"<<b<<endl;
	}
	catch(A obj)
	{
		cout<<"A- Denomenator is zero "<<endl;
	}
	catch(double d)
	{
		cout<<"double - Denometer is zero "<<d<<endl;
	}
	catch(...)  //ellipses
	{
		cout<<"universal catch- Denimenator is zero"<<endl;
	}
	
	return 0;
}
