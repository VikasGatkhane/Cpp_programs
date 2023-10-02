#include<iostream>
#include<cstring>
using namespace std;
class Myexception
{
	int line;
	char function[50];
	char file[50];
public:
	Myexception();
	Myexception(int, const char*, const char*);
	void show();
};
Myexception::Myexception()
{
}
Myexception::Myexception(int a, const char *fn, const char *fl)
{
	line=a;
	strcpy(function ,fn);
	strcpy(file, fl);
}
void Myexception::show()
{
	cout<<"Line number : "<<line<<endl;
	cout<<"Function  name : "<<function<<endl;
	cout<<"File name : "<<file<<endl;
}
double divide(int num, int den)
{
	if(den==0)
		throw Myexception(__LINE__,__FUNCTION__,__FILE__);
	return (double)num/den;
}
int main()
{
	try
	{
		cout<<divide(12,0)<<endl;
	}
	catch(Myexception a)
	{
		a.show();
	}
	return 0;
}
