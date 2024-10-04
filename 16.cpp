//Program to count the number of employees in the department and show their details

//16.1
//Using user defined input
#include<iostream>
#include<string.h>




using namespace std;
struct Employee{
	char name[50];
	int id;
	float salary;
};
int main(){
	int n;
	cout<<"\n\t Enter number of employees : ";
	cin>>n;
	Employee emp[n];
	for(int i=0;i<n;i++){
		cout<<"\n\t Enter details for employee "<<i+1<<" : ";
		cout<<"\n\t Name : ";cin>>emp[i].name;
		cout<<"\n\t ID : ";cin>>emp[i].id;
		cout<<"\n\t Salary : ";cin>>emp[i].salary;
	}
	cout<<"\n\t Employee Details : ";
	for(int i=0;i<n;i++){
		cout<<"\n\t Name : "<<emp[i].name<<"\n\t ID : "<<emp[i].id<<"\n\t Salary : "<<emp[i].salary<<endl;
	}
	return 0;
}

