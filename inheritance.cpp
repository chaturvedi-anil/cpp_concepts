#include <iostream> 
using namespace std; 
  
class Parent 	//Base class 
{ 
    public: 
      int id_p; 
}; 
   
class Child : public Parent	// derived class inheriting from Base Class(Parent)  
{ 
    public: 
      int id_c; 
}; 
  
int main()  
   { 
       
        Child obj; //child class object has all data members and member functions of parent class
        obj.id_c = 7; 
        obj.id_p = 91; 
        cout << "Child id is " <<  obj.id_c << endl; 
        cout << "Parent id is " <<  obj.id_p << endl; 
          
        return 0; 
   }  
