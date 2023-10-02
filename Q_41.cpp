#include<iostream>
using namespace std;
class Array
{
  int size;
  int *arr;
public : 
  Array();
  Array(int);
  void Accept();
  void display();
  ~Array();
  Array(Array &);
};
Array::Array(){
  size =5;
  arr= new int[5];
  for(int i=0; i<5; i++)
  {
    arr[i]=0;
  }
}     
Array::Array(int s)
{
  size=s;
  arr= new int[sizeof(int)*s];
  for(int i=0; i<s; i++){
    arr[i]=0;
  }
}
Array::Array(Array &l){
  size=l.size;
  arr= new int[size];
  for(int i=0; i<size; i++){
       arr[i]=l.arr[i];
  }
}
Array::~Array(){
  delete []arr;
}
void Array::Accept(){
  cout<<"Enter the elements : "<<endl;
  for(int i=0; i<size;i++ ){
    cin>>arr[i];
  }
  cout<<endl;
}
void Array::display(){
    for(int i=0; i<size;i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  Array a1;
  a1.display();
  Array a2(6);
  a1.Accept();
  a1.display();
  a2.Accept();
  a2.display();
  
  Array a3(a2);
  a3.display();
  
  
  return 0;
}

