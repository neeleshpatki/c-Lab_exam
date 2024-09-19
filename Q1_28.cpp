/*
Employee Management System
File handling has been effectively used for each feature of this project
Operation
1.	Add  Employee Information
2.	Search Employee Information
4.	Delete Employee Data
5.	Search Employee Record.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string name;
	int empID,c,salary,key;
	
	cout<<"\nEnter the details for employee";
		cout<<"\nEnter details ";
		cout<<"\n1.Add Employee information";
		cout<<"\n2.Search Employee information";
		cout<<"\n3.Delete Employee data";
		cout<<"\n4.Search Employee record";
		cout<<"\n5.Exit";
		cout<<"\n************************";
		cout<<"\nEnter choice to opt....";
		cin>>c;
	switch(c)
	{
		case 1:
			ofstream out("EmployeeInfo.txt");
			cout<<"\nEnter name of the employee:\n";
			cin>>name;
			cout<<"\nEnter EmployeeID:\n";
			cin>>empID;
			cout<<"\nEnter salary of the employee:\n";
			cin>>salary;
			cout<<"\n****************";
			out.close();
			cout<<name<<" with "<<empID<<" has salary of "<<salary;
			break;
			
		case 2:
			cout<<"\nEnter employee ID:";
			cin>>key;
			flag=0;
			if(key==empID)
			{
				flag=1;
				break;
			}
			if(flag==1)
			{
				cout<<"\n"<<name<<" with "<<empID<<" has salary of "<<salary;
				cout<<"\nEmployee found.";
			}
			else
			{
				cout<<"\nEmployee not found.";
			}
			break;
			
			case 3:
				cout<<"\nDelete the employee data.";
				
				
				
			case 4:
				cout<<"\nEnter employee ID:";
			cin>>key;
			flag=0;
			if(key==empID)
			{
				flag=1;
				break;
			}
			if(flag==1)
			{
				cout<<"\n"<<name<<" with "<<empID<<" has salary of "<<salary;
				cout<<"\nEmployee found.";
			}
			else
			{
				cout<<"\nEmployee not found.";
			}
			break;
			
			case 5:
				cout<<"\nThank you for using.";
				break;
			
			default:
				cout<<"\nInvalid choice....please enter again";
	}
}