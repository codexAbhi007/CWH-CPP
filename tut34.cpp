// Date: 19/01/2025
//! Copy Constructor
#include <iostream>
using namespace std;

class num
{
    int a;
    public:
        num(){
            a = 0;
        }

        num(int n){
            a = n;
        }

        //A copy constructor in C++ is a special constructor used to create a new object as a copy of an existing object. 
        //It initializes a new object using the data from another object of the same class.

        //when no copy copmiler is found then compiler provides its own copy constructor 
        //if we comment the constructor and run the prog it will run without any error
        //but then the print statement wont execute as it is not icnluded in the compiler defined copy constructor 
        num(num &obj){
            cout<<"COPY CONSTRUCTOR CALLED!";
            a = obj.a;
        }

        void display()
        {
            cout<<"The number for this object is "<<a<<endl;  
        }
};


int main() {
    num x, y, z(10);
    num z3;
    x.display();
    y.display();
    z.display();
    num z1(z); //copy constructor invoked 
    z1.display();

    num z2 = z; // copy constructor invoked
    z2.display();
    z3 = z; // copy constructor not invoked (compiler one invoked)
    z3.display();
    return 0;
}

// class ClassName {
// public:
//     ClassName(const ClassName &obj); // Copy constructor declaration
// };
