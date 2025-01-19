// Date: 19/01/2025
#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
    //Creating a constructor
    //Constructor is a special member function with same name as of the class
    //it is used to initialize the objects of its class
    //automatically invoked during initialization of an instance of the class
    complex(int real,int img); // constructor declaration
    // should be declared in the public section of the class
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

// complex::complex(void) //default constructor and dont take parameters and dont have any return type 

complex::complex(int real, int img)
{
    a = real;
    b = img;
    display();
    
}


int main() {
    complex c1(10,20); //implicit call
    complex c2 = complex(40,50); //explicit call
    c2.display();
    return 0;
}    