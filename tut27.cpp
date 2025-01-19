  
// Date: 19/01/2025
#include <iostream>
using namespace std;

// forward decalaration


class complex
{
    int a, b;
    // Individually declaring funcstions as friends
    // friend int calculator::sumRealComplex(complex c1, complex c2);
    // friend int calculator::sumCompComplex(complex c1, complex c2);

    //Alter: Declaring the entire calculator class as friend

    friend class calculator;

public:
    void setNumber(int real, int img)
    {
        a = real;
        b = img;
    }

    void printNumber()
    {
        cout << "Number is " << a << " + " << b << "i" << endl;
    }
};
class calculator
{
public:
    int sumRealComplex(complex c1, complex c2){
        return (c1.a + c2.a);
    }
    int sumCompComplex(complex c1, complex c2){
        return (c1.b + c2.b);
    }
};



// int calculator::sumRealComplex(complex c1, complex c2)
// {

//     return (c1.a + c2.a);
// }
// int calculator::sumCompComplex(complex c1, complex c2)
// {

//     return (c1.b + c2.b);
// }

int main()
{
    complex c1;
    complex c2;
    c1.setNumber(4,5);
    c2.setNumber(6,7);
    calculator calc1;
    int res1 = calc1.sumCompComplex(c1,c2);
    int res2 = calc1.sumRealComplex(c1,c2);

    cout<<"Sum of img parts: "<<res1<<endl;
    cout<<"Sum of real parts: "<<res2<<endl;
    
    return 0;
}