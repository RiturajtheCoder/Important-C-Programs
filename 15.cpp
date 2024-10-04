//Program to calculate the average of 10 students where 5 students will be taken from 2 section

//15.1
//Using User Defined Data
#include<iostream>
using namespace std;
int main(){
	int section1[5],section2[5],total=0;
	cout<<"\n\t Enter marks for 5 section A students : ";
	for(int i=0;i<5;i++){
		cin>>section1[i];
		total+=section1[i];
	}
	cout<<"\n\t Enter marks for 5 section B students : ";
	for(int i=0;i<5;i++){
		cin>>section2[i];
		total+=section2[i];
	}
	float average=total/10.0;
	cout<<"\n\t Average marks of 10 students : "<<average<<endl;
	return 0;
}

