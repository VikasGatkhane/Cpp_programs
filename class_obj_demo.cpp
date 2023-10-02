#include<iostream>
using namespace std;
/*
	Abstraction - It is a process of identifying key attributes of an empty and ignoring rest of 
	              attributes (data members ) .
	Encapsulation- It refers to the data hiding of data members 
*/
class Rectangle
{
	int len;   // data member 
	int brd;
public:            // acces specifier 
	void accept();
	void calArea();
};
void Rectangle::accept()   // :: scope resolution 
{
	cout<<"Enter length and bradth : "<<endl;
	cin>>len>>brd;	
}
void Rectangle::calArea()
{
	cout<<"Area : "<<len*brd<<endl;
}
int main()
{

	Rectangle r1;  // r1 is object
	r1.accept();
	r1.calArea();
	return 0;
}
