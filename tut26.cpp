// Date: 17/01/2025
#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;
    friend complex sumC(complex c1, complex c2);

public:
    void setData(int v1, int v2)
    {
        real = v1;
        img = v2;
    }

    // void setDataBySum(complex c1, complex c2){
    //     real = c1.real + c2.real;
    //     img = c2.img + c2.img;
    // }

    void displayComplex()
    {
        cout << real << " + " << img << "i";
    }
};

complex sumC(complex c1, complex c2)
{
    complex c3;
    c3.setData((c1.real + c2.real), (c1.img + c2.img));
    return c3;
}

int main()
{
    complex c1, c2;
    c1.setData(4, 10);
    c2.setData(5, 3);
    complex c3 = sumC(c1, c2);
    c3.displayComplex();
    return 0;
}

/*
Properties of friend functions
1. Not in scope of the class
2. since it is not in the scope of the class, it cannot be called form the obnject of that. c1.suMC() is inavlid 
3. can be invoked without the help of any object 
4. usually contains the objects as arguments 
5. cannot access the members directly by their names 

*/
