#include <iostream>
using namespace std;

int main()
{
    float a = 10.5;
    float b = 10.5f;
    long double c = 1;
    long double d  = 1L;
    
    cout<<"Size of a: "<<sizeof(a)<<" and Size of b: "<<sizeof(b)<<endl;
    cout<<"Size of c: "<<sizeof(c)<<" and Size of d: "<<sizeof(d)<<endl;



    cout<<"The size of integer "<<sizeof(int)<<endl;
    cout<<"The size of float "<<sizeof(float)<<endl;
    cout<<"The size of long double "<<sizeof(long double)<<endl;
    cout<<"The size of double "<<sizeof(double)<<endl;
    cout<<"The size of char "<<sizeof(char)<<endl<<endl;


    //#Reference Variable

    int x = 10;
    int &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    x = 20;
    cout<<x<<endl;
    cout<<y<<endl;

    y = 30;
    cout<<x<<endl;
    cout<<y<<endl;


    //#Typecasting 

    float i = 10.5;
    cout<<i<<endl;
    cout<<int(i)<<endl;

    return 0;
}

