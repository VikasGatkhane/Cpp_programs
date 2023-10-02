#include<iostream>
#include<list>
using namespace std;
 int main()

{
	list<int > l1;
	
	l1.push_back(15);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_front(50);
	list<int>::iterator itr;           //syntax to access elements of vector
	for(itr=l1.begin(); itr!=l1.end(); itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
}
