#include <iostream>
using namespace std;

class student  //class 
{
public:
    int rollnumber; 	//data member1
    string name;    	//data member2
    int marks;		//data member3
    void result();	//member function
};
void student::result()  //member function definition
{
    if(marks>40)
    {
        cout<<"Pass";
    }
    else
    {
        cout<<"fail";
    }
}
int main()
{
    student s1,s2;	//object creation
    s1.rollnumber=1;
    s1.name="anil";
    s1.marks=68;
    cout<<"s1 rollnumber = "<<s1.rollnumber<<endl;	//data member access using object s1
    cout<<"s1 name = "<<s1.name<<endl;		// ""
    cout<<"s1 marks = "<<s1.marks<<endl;		// ""
    cout<<"s1 result = ";
    s1.result();					//member function access using object s1

    return 0;
}

