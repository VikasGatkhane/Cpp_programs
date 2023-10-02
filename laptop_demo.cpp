#include<iostream>
#include<cstring>
using namespace std;
/*
	Destructor:- 
		1)It is a member function of a class with name same as that of class name and 
		  preceded with ~ (tilda ) symbol
		2) Distructor is implicitely called whenever an object goes out of scope.
		3) Distructor is implemented in a class to avoid memory leakage.
		4) We cannot overload distructor 

*/
class Laptop
{
	int lid;
	char *make;
	double cost;
public :
	Laptop();
	Laptop(int, char*, double);
	void show();
	~Laptop(); 
};
Laptop::~Laptop()
{
	delete []make;
}
Laptop::Laptop()
{
	lid= 101;
	make= new char[3];
	strcpy(make,"hp");
	cost =40000;
}
Laptop::Laptop(int id, char *a, double c )
{
	lid=id;
	make= new char(strlen(a)+1);
	strcpy(make,a);
	cost=c;
}
void Laptop::show()
{
	cout<<lid<<endl;
	cout<<make<<endl;
	cout<<cost<<endl;
}

int main()
{
	Laptop l1;
	Laptop l2(102, "Lenovo", 35000);
	l1.show();
	cout<<endl;
	l2.show();
	
	return 0;
}
