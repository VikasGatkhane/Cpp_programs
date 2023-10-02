#include<iostream>
using namespace std;
int main()
{
	int i;
	int *p=(int*)calloc(5, sizeof(int));
	
	cout<<"Enter five integers "<<endl;
	for(i=0; i<5; i++)
	{
		cin>>p[i];
	}
	
	p=(int*)realloc(p, sizeof(int)*7);
	cout<<"Enter two more integers : "<<endl;
	for(i=5; i<7; i++)
		cin>>p[i];
	
	for(i=0; i<7; i++)
		cout<<p[i]<<" ";
	free(p);
	cout<<endl;
	return 0;
}
