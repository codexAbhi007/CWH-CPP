// Date: 19/01/2025
#include <iostream>
using namespace std;
class bank
{
    int principal;
    int yrs;
    float interest;
    float amount;

public:
    bank() {};
    bank(int p, int y, float r);
    bank(int p, int y, int r);

    void display()
    {
        cout<<"Principal amount: "<<principal<<endl
        <<"Time: "<<yrs<<" years"<<endl
        <<"Rate: "<<interest<<endl
        <<"Amount: "<<amount<<endl;
    }
};

bank::bank(int p, int y, float r)
{
    principal = p;
    yrs = y;
    interest = r;
    amount = principal;
    int i;
    for (i = 0; i < y; i++)
        amount = amount + amount * interest;
}

bank::bank(int p, int y, int r)
{
    principal = p;
    yrs = y;
    interest = float(r)/100;
    amount = principal;
    int i;
    for (i = 0; i < y; i++)
        amount = amount + amount * interest;
}

int main()
{
    bank b1;
    int principal = 100;
    int interest = 5;
    int yrs = 2;
    b1 = bank(principal,yrs,interest);
    b1.display();
    return 0;
}