#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public :
		int id;
		int salary;
		int contact;
		char name[100];
		char role[100];
		char experience[100];
		char address[100];
		char email[100];
		
		void setData()
		{
			cout<<"Enter the ID =";
			cin>>id;
			
			cout<<"Enter the NAME =";
			cin>>name;
			
			cout<<"Enter the SALARY =";
			cin>>salary;
			
			cout<<"Enter the CONTACT =";
			cin>>contact;
			
			cout<<"Enter the ROLE =";
			cin>>role;
			
			cout<<"Enter the EXPERIENCE =";
			cin>>experience;
			
			cout<<"Enter the ADDRESS =";
			cin>>address;
			
			cout<<"Enter the EMAIL =";
			cin>>email;
		}
		
		void getData()
		{
			cout<<"ID ="<<id<<endl;
			cout<<"NAME ="<<name<<endl;
			cout<<"SALARY ="<<salary<<endl;
			cout<<"CONTACT ="<<contact<<endl;
			cout<<"ROLE ="<<role<<endl;
			cout<<"EXPERIENCE ="<<experience<<endl;
			cout<<"ADDRESS ="<<address<<endl;
			cout<<"EMAIL ="<<email<<endl;
		}
};

int main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
}
