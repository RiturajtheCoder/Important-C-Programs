//Program to create a class to calculate the area of a triangle, rectangle, circle

//18.1
//Using function
#include <iostream>
using namespace std;
class shape{
	
public:
	void area(double height,double base){
		cout<<"\n\t Area of Triangle with height "<<height<<" and base "<<base<<" is : "<<0.5*height*base<<endl;
	}
	void area(double radius){
		cout<<"\n\t Area of circle with radius "<<radius<<" is : "<<3.14*radius*radius<<endl;
	}
	void area(int length,int breadth){
		cout<<"\n\t Area of rectangle with length "<<length<<" and breadth "<<breadth<<" is : "<<length*breadth<<endl;
	}
};
int main(){
	shape s;
	s.area(10.1,5.98);
	s.area(9.87);
	s.area(4,8);
	return 0;
}
