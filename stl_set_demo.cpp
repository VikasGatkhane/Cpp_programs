#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<int> s1;
	s1.insert(100);
	s1.insert(15);
	s1.insert(30);
	s1.insert(30);
	s1.insert(40);
	s1.insert(30);
	
	set<int>::iterator itr;
	for(itr=s1.begin(); itr!=s1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
} 
