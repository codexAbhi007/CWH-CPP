#include <iostream>
#include <iomanip>
using namespace std;


int main(){
   //#Manipulators
    
    int a = 2;
    int b = 2;
    int c = 2;
    int d = 2;
    int e = 2;
    int f = 2;
    int g = 2;
    int h = 2;
    int i = 2;
    int j = 2;
    int k = 2;
    int l = 2;
    
    cout<<setw(2)<<a;
    cout<<setw(2)<<b;
    cout<<setw(2)<<c;
    cout<<setw(2)<<d;
    cout<<setw(2)<<e<<endl;
    cout<<setw(2)<<f;
    cout<<setw(8)<<g<<endl;
    cout<<setw(2)<<h;
    cout<<setw(2)<<i;
    cout<<setw(2)<<j;
    cout<<setw(2)<<k;
    cout<<setw(2)<<l;    

    return 0;
}