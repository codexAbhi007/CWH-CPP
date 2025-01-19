// Date: 19/01/2025
#include <iostream>
using namespace std;

class c1{
    int data1,data2,data3;
    public:
        c1(int a,int b=10,int c=20){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData()
        {
            cout<<"data1: "<<data1<<" data2: "<<data2<<" data3: "<<data3;
        }
};



int main() {
    c1 num1(10,30);
    num1.printData();
    return 0;
}