#include<iostream>
#include<string>
using namespace std;

struct address
{
   int houseno;
   string streetname;

struct student
{
	int rollno;
	string name;
}st;
}addr={12,"dg"};
main()
{    
    addr.st.rollno=23;
    addr.st.name="nasir";
	cout<<"the houseno is ="<<addr.houseno<<endl;
	cout<<"the street name is ="<<addr.streetname<<endl;
	cout<<"the student name is ="<<addr.st.name<<endl;
    cout<<"the student rollno is ="<<addr.st.rollno<<endl;
	
	return 0;
}
