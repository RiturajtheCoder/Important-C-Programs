//Program to calculate simple interest by keeping rate at a defaukt value of 15%

//17.1
//Using function
#include <iostream>
using namespace std;
double simple_interest(double principal,double time,double rate=0.15){
	return principal*time*rate;
}
int main(){
	double principal, time;
	cout<<"\n\t Enter the principal for the interest : ";
	cin>>principal;
	cout<<"\n\t Enter the time for the interest(in months) : ";
	cin>>time;
	double si=simple_interest(principal,time);
	cout<<"\n\t The simple interest for principal of "<<principal<<" for "<<time<<" months "<<" is : "<<si<<endl;
	return 0;
}
