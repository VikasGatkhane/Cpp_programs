#include<iostream>
using namespace std;
#include<cstring>
// selection sort 
template<typename T>
void sort(T *arr, int n)
{
	int i,j;
	T temp;
	for(i=0; i<n-1; i++ )
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

int main()
{ 
	string arr[100];
	int n;
	cout<<"How many strings : "<<endl;
	cin>>n;
	cout<<"Enter the element of array : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	
	sort(arr,n);
	cout<<"sorted array is : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
