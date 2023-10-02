#include<iostream>
using namespace std;
/*
	Function overriding - Multiple functions with same name, same signature and return type 
	defined in different scope of classes of hierarchy of inheritance is called function overriding.
	
	Object slicing- Whenever a derived class object is assingned to base class object the attributes which
	are specific to derived class object are sliced off from that object. This is called object slicing.
	
	In c++ base class pointer can hold the address of derived class object but derived class pointer cannot
	hold the address of base class object i.e only upcasting is possible.
	
	Binding - it is an association of function call to the corresponding function defination 
	without virtual function binding happens is called static binding, compile time binding early binding 
	with virtual function is called as dynamic binding, run time binding , late binding.
	
	Polymorphism- 
		It is different response given by objects to same command. In c++ polymorphism is implemented using 
		virtual functions.
*/
int main()
{
	Employee e1, *eptr;
	WageEmployee wel;
	
	eptr=&we1; // eptr is called generic ponter 
	eptr ->Display(); 
	
	return 0;
}
