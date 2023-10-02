#include<iostream>
using namespace std;
/*
	Constructor(3 types - default , parametarised , copy) :- 
		1. It is function with same name as that of class name and no return type.
		2. Constructor is implicitly called whenever an object of a class is created.
		3. It is used to initialize the data members of a class.
*/
class Rectangle{
	int len;
	int brd;
public: 
	Rectangle();
	Rectangle(int, int);
	void accept();
	void calcArea();
	void show();
	int  getLen();
	void setLen(int);
};
int Rectangle:: getLen()
{
	return len;
}
void Rectangle::setLen(int l)
{
	len=l;
}
Rectangle::Rectangle()
{
	len =1;
	brd =1;
}
Rectangle::Rectangle(int i, int b){
	len=i;
	brd=b;
}
void Rectangle::accept(){
	cout<<"Enter lenth and breadth: "<<endl;
	cin>>len>>brd;
}
void Rectangle::calcArea(){
	cout<<"Area is : "<<len*brd<<endl;
}
void Rectangle::show(){
	cout<<"lenth = "<<len<<" ,Breadth = "<<brd<<endl;
}
int main()
{
	Rectangle r1, r2(21,30), r3,r4;
	//r2.show();
	cout<<r2.getLen()<<endl;
	r2.show();
	r2.setLen(100);
	r2.show(); //100,20
	return 0;
}

