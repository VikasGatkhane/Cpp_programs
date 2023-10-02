#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
  int emp_id;
  char emp_name[20];
  double salary;
public: 
  Employee();
  Employee(int, char* , double );
  int getId();
  void Accept();
  void Display();
};
int Employee::getId()
{
  return emp_id;
}
Employee::Employee(){
}
Employee::Employee(int id, char* n, double s){
  emp_id=id;
  strcpy(emp_name, n);
  salary=s;
}
void Employee::Accept(){
  cout<<"Enter Info(id , name, salary )"<<endl;
  cin>>emp_id>>emp_name>>salary;
} 
void Employee::Display(){
  cout<<emp_id<<" "<<emp_name<<" "<<salary<<endl;
}
int main()
{
  int choice, cnt=0, empid;
  Employee e[10];
  while(true){
  cout<<"1. Insert Employee"<<endl;
  cout<<"2. Update Employee"<<endl;
  cout<<"3. Display"<<endl;
  cout<<"4. Exit"<<endl;
  cin>>choice;
  switch(choice){
            case 1:
                  e[cnt++].Accept();
                  break;
            case 2:
                  cout<<"Enter empid to be updated"<<endl;
                  cin>>empid;
                  for(int i=0; i<cnt; i++){
                          if(e[i].getId()==empid)
                          {
                                  e[i].Accept();
                          }
                  }
                  break;
            case 3:
                  for(int i=0; i<cnt;i++)
                        e[i].Display();
                  break;
            case 4:
                  exit(0);
         }
  
  }
  return 0;

}
