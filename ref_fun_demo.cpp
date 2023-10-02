#include<iostream>
using namespace std;
/*
 	A function call can stand onto the LHS of the assingment operator if a function is returning a 
 	value by reference 
*/
char& fn(char *s)
{
	return s[0];
}
int main()
{
	char s[]= "tcs";
	char ch='T';
	fn(s)= ch;
	cout<<s<<endl;
	return 0;
}
