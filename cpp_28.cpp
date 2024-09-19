/*
Name : Neelesh Pataki
Roll no : 28
*/

/*
Q2)Write a program to print the area of two rectangles 
having sides (4,5) and (5,8) respectively by creating a class 
named 'Rectangle' with 
a function named 'Area' which returns the area and Length.
*/
#include<iostream>
using namespace std;
class Rectangle{
	private:
		float length,breadth;
		
	public:
		void set_data(float l,float b)
		{
			length=l;
			breadth=l;	
		}
		
		void area()
		{
			length*breadth;
			cout<<"\nThe area of rectangle is : "<<length*breadth;
		}
		void length_rectangle()
		{
			cout<<"\nThe length of the rectangle is : "<<length;
		}
};
int main()
{
	float l,b;
	Rectangle r1,r2;
	r1.set_data(4,5);
	r1.area();
	cout<<"\n";
	r1.length_rectangle();
	cout<<"\n*******************";
	r2.set_data(5,8);
	r2.area();
	cout<<"\n";
	r2.length_rectangle();
	
	return 0;
}