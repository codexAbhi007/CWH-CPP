// Date: 19/01/2025
#include <iostream>
using namespace std;
class y;
class x
{
    int x1;

public:
    void setdata(int x1)
    {
        x1 = x1;
    }
    friend void add(x, y);
};
class y
{
    int y1;

public:
    void setdata(int y1)
    {
        y1 = y1;
    }
    friend void add(x, y);
};

void add(x num1, y num2)
{
    cout << "Sum of x1 of x class and y1 of y class is " << num1.x1 + num2.y1;
}



class c2;
class c1
{
    int val1;
    friend void swap_class_var(c1 &a, c2 &b);
    public:
        void setData(int val)
        {
            val1 = val;
        }
        void display()
        {

            cout << val1 << endl;
        }
};
class c2
{
    int val2;
    friend void swap_class_var(c1 &a, c2 &b);
    public:
        void setData(int val)
        {
            val2 = val;
        }
        void display()
        {

            cout << val2 << endl;
        }
};

void swap_class_var(c1 &a, c2 &b)
{
    int temp  = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
};


main()
{
    c1 a;
    c2 b;
    a.setData(10);
    a.display();

    b.setData(20);
    b.display();

    cout<<"SWAPPING.."<<endl;

    swap_class_var(a,b);

    a.display();
    b.display();
    return 0;
}