// Date: 16/01/2025
#include <iostream>
#include <string>
using namespace std;

class Employee{
    int id;
    string name;
    static int count;
    public:
        void setData(void){
            cout <<"Enter Employee ID: " << endl;
            cin>>id;
            count++;

            cout << "Eneter Employee Name: " << endl;
            cin >> name;
        }
        void getData(void){
            cout<<"ID: "<<id<<" Name: "<<name<<endl;
        }

        static void countEmployee(void)
        {
            cout<<count;
        }
};


int Employee::count; //INITALIZED TO 0


int main() {
    Employee abhi, adi, adip;
    abhi.setData();
    abhi.getData();
    adi.setData();
    adi.getData();
    adip.setData();
    adip.getData();
    Employee::countEmployee();
    return 0;
}