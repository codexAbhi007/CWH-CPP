// Date: 17/01/2025
#include <iostream>
using namespace std;

class complex{
    int real;
    int img;

    public:
    void setData(int v1, int v2){
        real = v1;
        img = v2;
    }

    void setDataBySum(complex c1, complex c2){
        real = c1.real + c2.real;
        img = c2.img + c2.img;
    }

    void displayComplex()
    {
        cout<<real<<" + "<<img<<"i";
    }
};


int main() {
    complex c1,c2,c3;
    c1.setData(4,10);
    c2.setData(5,3);
    c3.setDataBySum(c1,c2);
    c3.displayComplex();
    return 0;
}
