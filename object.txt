<---------------------------------------ClassDefinition---------------------------------------:

Class is a user-defined data type.
Class has its own data member and member function for operations. 
Class has three different types of access specifier: public,private,protected.
Access specifier  -: Access specifiers are used to implement special meaning of particular data member and member function, it provides special features to class Data Hiding.
Public -: When we use Public access specifier we can access all the data member and member function of class anywhere in the program by using (.) operator.
Private -: When we use a Private access specifier we can only access using member function of the class.
Protected -: When we use the Protected access specifier then we can access those data members in derived class also.
Class is a blueprint of the object.
Data members are the data variable(State) and member functions are the functions(behaviour) and together these data variables and functions define property and behaviour of the object in the class.



←---------------------------------------- Object ----------------------------------------->

Object is an instance of the class. When we create an object of the class instantaly memory will be allocated for data members of the class.

<------Example: 

Computer_science_student is a class and it has some property like: roll number, name ,course And behaviour like: exam,result,activity.
And all the students of computer science are objects of the Computer_science_student.



<----------------Syntax -: 

Class class_name
{
	Private:
	
	Protected:

	Public:
		Data_member;
		Member_function;
};
int main()
{
	Class_name object1_name, object2_name;
	return 0;
}

