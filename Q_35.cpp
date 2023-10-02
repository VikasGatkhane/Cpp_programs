#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of subjects : "<<endl;
	cin>>n;
	int *arr = new int[n];
	cout<<"Enter marks of "<<n<<" subjects "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"You entered an array :"<<endl;
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<"   ";
	}
	
	delete []arr;
	cout<<endl;
	
	return 0;
	
}
