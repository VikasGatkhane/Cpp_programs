#include<iostream>
using namespace std;
/*
	pure virtual function :- It is a virtual function initialised to zero and do not have any defination 
				associated to it.
				
	abstract class - 1) it is a class which is having at least one pure virtual function declared inside it.
			 2) We cannot create an object of an abstract class 
			 3)If a class is inheriting an abstract class then it is compulsory for that class to oveerride pure virtual 
			 functions of the base class(abstract class )
	
	pure abstract class - It is a class having all functions declared as pure virtual.

*/

class polygon          // abstract class   // we can not create object of abstract class 
{
public:
	virtual double calcArea()=0;   // pure virtual function
	virtual double calcPeri()=0;
};
class circle:public polygon
{
	int radius;
public :
	circle();
	circle(int);
	double calcArea();
	double calcPeri();
};
circle::circle()
{
	radius=1;
}
circle::circle(int a)
{
	radius=a;
}
double circle::calcArea()
{
	return 3.142f*radius*radius;
}
double circle::calcPeri()
{
	return 2*3.142f*radius;
}
class Rectangle:public polygon
{
	int len,brd;
public:
	Rectangle();
	Rectangle(int, int);
	double calcArea();
	double calcPeri();
};
Rectangle::Rectangle()
{
	len=brd=1;
}
Rectangle::Rectangle(int a, int b)
{
	len =a;
	brd=b;
}
double Rectangle::calcArea()
{
	return len*brd;
}
double Rectangle::calcPeri()
{
	return 2*(len+brd);
}
class square:public Rectangle
{
	public: 
		square();
		square(int);
		double calcArea();
		double calcPeri();
};
square::square()
{
}
square::square(int s):Rectangle(s,s)
{
}
double square::calcArea()
{
	return Rectangle::calcArea();
}
double square::calcPeri()
{
	return Rectangle::calcPeri();
}

int main()
{
	Rectangle r1(2,3);
	polygon *ptr = &r1;
	cout<<ptr->calcArea()<<endl;
	
	return 0;
}
