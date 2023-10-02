#include<iostream>
#include<vector>
using namespace std;
/*
	STL:- standard template library 
		1) Containers
			a. Sequence containers e.g vector , list , deque 
			b. Associate Containers e.g set, multiset, map, multimap
			c. Container adapters e.g stack, que 
		2)Iterators - Input , output , forward , bi- directional , random acces iterators 
		3)Algorithms - min, max, min element , max element, accumulate , sort 
		4)Functions objects - these are the objects of classes for which () operator is overloaded 
*/
class A
{
public: 
	class B
	{
	};
};
 int main()

{
	A::B obj;
	vector<int > v1;
	cout<<v1.size()<<" "<<v1.capacity()<<endl;
	
	v1.push_back(15);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	for(int i=0; i<v1.size(); i++)         //syntax only works with vector.
	{
		cout<<v1[i]<<" ";
	}
	cout<<endl;
	vector<int>::iterator itr;           //syntax to access elements of vector
	for(itr=v1.begin(); itr!=v1.end(); itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
}
