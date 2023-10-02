#include<iostream>
using namespace std;
int main()
{	
	//int *p=(int*)malloc(sizeof(int)*5);   way to allocate memory in c 
	int i;
	int *p= new int[5];	// way to allocate memory in cpp
	cout<<"Enter the elements of array :"<<endl;
	for(i=0; i<5; i++ )
	{
		cin>>p[i];
	}
	cout<<"You entered an array : "<<endl;
	for(i=0; i<5; i++)
		cout<<p[i]<<" ";
		
	delete []p;
	cout<<endl;
	
	return 0;
}
