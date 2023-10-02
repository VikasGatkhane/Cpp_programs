#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
public:
	complex();
	complex(int , int);
	int getreal();
	void setreal(int);
	int getimg();
	void setimg(int);
	void display(); 
};

complex::complex()
{
	real=1;
	img=1;
}
complex::complex(int a , int b)
{
	real= a;
	img= b;
}
int complex::getreal()
{
	return real;
}
void complex::setreal(int a)
{
	real= a;
}
int complex::getimg()
{
	return img;
}
void complex::setimg(int i)
{
	img=i;
}
void complex::display()
{
	cout<<real<<endl;
	cout<<img<<endl;
}

int main()
{
	complex a1(2,3);
	a1.display();
	a1.setreal(25);
	a1.setimg(30);
	a1.display();
}

