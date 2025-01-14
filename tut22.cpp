// Author: @codexAbhi007
// Date: 14/01/2025
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    bool chk_bin();

public:
    void read();

    void ones_c();
    void display();
};

void binary::read()
{ // void here represents return type of function declared above and not realted to class
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

bool binary::chk_bin()
{
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary number!";
            exit(1);
            return false;
        }
    }
    return true;
}

// Scope of Member Variables:

// When a member function is called on an object of the class (e.g., binary obj; obj.read();), the function operates on that specific object's data.
// This means s belongs to the object on which the function is called. The function binary::chk_bin() will access the s of the same object.

void binary::ones_c()

{
    if (chk_bin()) // Nesting of memeber functions
    {
        cout << "Number set" << endl;
    }
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary::display()
{
    for (unsigned int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b1;
    b1.read();
    // if (b1.chk_bin())
    // {
    //     cout<<"Number set"<<endl;
    // }
    b1.ones_c();
    b1.display();
    return 0;
}                                                          