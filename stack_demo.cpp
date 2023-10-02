#include<iostream>
using namespace std;

template<typename T>
class stack                    //templatize class for type T
{
	int size;
	T *arr;
	int top;
public:
	stack();
	stack(int);
	void push(T);
	T pop();
	bool isfull();
	bool isempty();
	int getsize();
		
};
template<typename T>
stack<T>::stack()
{
	size=5;
	arr= new T[size];
	top=-1;
}
template<typename T>
stack<T>::stack(int a)
{
	size=a;
	arr= new T[size];
	top= -1;
}
template<typename T>
void stack<T>::push(T val)
{
	if(!isfull())
		arr[++top]=val;
	else
		cout<<"Overflow !"<<endl;
}
template<typename T>
T stack<T>::pop()
{
	if(!isempty())
		return arr[top--];
	else
	{
		cout<<"Underflow!"<<endl;
		return 0;
	}
}
template<typename T>
bool stack<T>::isfull()
{
	return top== size-1;
}
template<typename T>
bool stack<T>::isempty()
{
	return top==-1;
}
template<typename T>
int stack<T>::getsize()
{
	return top+1;
}

int main()
{
	stack<int> s1(6);
	
	s1.push(10);
	s1.push(20);
	s1.push(30);
	
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	
	stack< const char*> s2;
	s2.push("wipro");
	s2.push("tcs");
	s2.push("infosys");
	
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	cout<<s2.pop()<<endl;
	
	return 0;
}
