#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a, b;
	vector<int> v1;
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>a;
		v1.push_back(a);
	}
	for(int i=0; i<v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter two more values : "<<endl;
	for(int i=v1.size(); i<12; i++)
	{
		cin>>a;
		v1.push_back(a);
	}
	for(int i=0; i<v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<2;i++)
	{
		v1.pop_back();
	}
	cout<<endl;
	vector<int>::iterator itr;          
	for(itr=v1.begin(); itr!=v1.end(); itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
	
}
