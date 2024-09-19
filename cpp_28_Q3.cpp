/*
Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class.
Write member functions to accept and display Student information also display count of students. 
*/
#include<iostream>
using namespace std;
class student{
	private:
		string student_name;
		int Class;
		int roll_no=0,count=0;
		
	public:
		void set_data()
		{
			cout<<"\nEnter Student name :\n";
			getline(cin,student_name);
			cout<<"\nEnter the class in which the student is studying.\n";
			cin>>Class;
		}
	    void set_roll_no()
		{
			roll_no++;
		}
		void count_c()
		{
			count++;
		}
		void display_data()
		{
			cout<<"********************\n";
			cout<<"\nStudent Name : "<<student_name<<" , Roll No : "<<roll_no<<" studying in class "<<Class;
			cout<<"\nTotal count of students : "<<count;
			cout<<"\n********************\n";
		} 
};

main()
{
	student s1,s2;
	s1.set_data();
	s1.set_roll_no();
	s1.count_c();
	s1.display_data();
	
	s2.set_data();
	s2.set_roll_no();
	s2.count_c();
	s2.set_roll_no();
	
	return 0;
}