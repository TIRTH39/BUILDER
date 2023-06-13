#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	public :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		char rating_type[100];
		char website[100];
		
		void setData(int id,char name[100],char type[100],int staff_size,int room_size,int establish_year,char address[100],char rating_type[100],char website[100])
		{
			this->id = id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			strcpy(this->rating_type,rating_type);
			strcpy(this->website,website);
		}
		
		void getData()
		{
			cout<<"id ="<<id<<endl
			    <<"name ="<<name<<endl
			    <<"type ="<<type<<endl
			    <<"staff_size ="<<staff_size<<endl
			    <<"room_size ="<<room_size<<endl
			    <<"establish_year ="<<establish_year<<endl
			    <<"address ="<<address<<endl
			    <<"rating_type ="<<rating_type<<endl
			    <<"website ="<<website<<endl;
		}
};

int main()
{
	Hotel h;
	
	h.setData(10,"Taj Lands End","VEG",250,500,1500,"Mumbai","5 STAR","www.tajhotels.com");
	h.getData();
	
	return 0;
}
