#include<iostream>
using namespace std;
  // reference - It is an alias (nickname ) to a variable 
  
int main()
{
	int a=10;
	int &ra= a;
	cout<<" "<<ra<<endl;  //10 10
	
	a++;
	ra++;
	a++;
	ra++;
	cout<<" "<<ra<<endl;   // 14  14
	
	float f= 2.3f;
	float &rf= f;
	
	int *p;
	int* &rp=p;     // reference to a pointer 
	
	int arr[5];
	int(&r_arr)[5]= arr;     // reference to an array 
	
	return 0;
}
