#include<iostream>
using namespace std;
class student{
	private:
		string name,address;
		int age;
		
	public:
		student()
		{
			name="unknown";
			age=0;
			address="Not available";
		}
		
		void set_info(string name,int age)
		{
			name=name;
			age=age;
			
		}
		
		void set_info(string name,int age,string address)
		{
			name=name;
			age=age;
			address=address;
			cout<<name<<" is from "<<address<<" and is of "<<age<<" years old.";
		}
};

int main()
{
	string name,address;
	int age;
	student s[10];
	cout<<"\nEnter details";
	for(int i=0;i<10;i++)
	{
			cout<<"\nEnter name : ";
			cin>>name;
			cout<<"\nEnter age : ";
			cin>>age;
			cout<<"\nEnter address : ";
			cin>>address;
		s[i].set_info(name,age,address);
		cout<<"\n";
	}
}