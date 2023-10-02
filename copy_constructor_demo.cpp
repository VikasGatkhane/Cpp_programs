#include<iostream>
#include<cstring>
using namespace std;
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
	Laptop(Laptop &); 
};
Laptop::~Laptop()
{
	delete []make;
}
 
Laptop::Laptop(Laptop &l)
{
	lid=l.lid;
	make= new char[strlen(l.make)+1];
	strcpy(make, l.make);
	cost=l.cost;
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
	Laptop l4(l2);
	l2.show();
	cout<<endl;
	l4.show();
	
	return 0;
}
