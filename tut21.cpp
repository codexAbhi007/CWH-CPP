// Author: Your Name
// Date: 07/01/2025
#include <iostream>
using namespace std;

class Employee {
    private:
        int a, b, c; // Private members
    public:
        int d; // Public member
        // Use a constructor or method to initialize variables
        void setData(int x, int y, int z, int w) {
            a = x;
            b = y;
            c = z;
            d = w;
        }
        void getData() {
            cout << "a: " << a << endl;
            cout << "b: " << b << endl;
            cout << "c: " << c << endl;
            cout << "d: " << d << endl;
        }
};

int main() {
    Employee emp;
    emp.setData(10, 20, 30, 40);
    emp.getData();

    return 0;
}