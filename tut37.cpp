// Date: 17/02/2025
#include <iostream>
using namespace std;


//Base Class
class Employee{
    int id ;
    float salary;
    public: 
        int public_var = 10;
        Employee(int inpID,float inpSalary){
            id = inpID;
            salary=inpSalary;
        };
        void display(){
            cout<<"Id is: "<<id<<endl;
            cout<<"Salary is: "<<salary;
        }
    
        Employee(){};
};

// Derived class syntax 
// class {{derivied-class-name}} : {{visibility-mode base-class-name}}

//! default visiibility mode is private : public members of the base class becomes private members of the derived class
//! Public visibility mode: public members of the base class becomes public members of the derived class
//!Prvt members of base class is never inherited
class Programmer : Employee { 
    public:
        int languageCode = 9;
        Programmer(int inpID)
        {
            id = inpID;
        };


};



int main() {
    Employee abhi(1,2000);
    abhi.display();
    return 0;
}