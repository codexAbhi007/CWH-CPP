/**
 * The code defines a C++ program that calculates the distance between two points in a 2D plane using a
 * class and a friend function.
 * 
 * @param val1 val1 is the x-coordinate of the point.
 * @param val2 The parameter `val2` in the `point` class constructor represents the y-coordinate of the
 * point being created. In the constructor definition `point::point(int val1, int val2)`, `val2` is
 * used to initialize the `y` coordinate of the point object being created.
 */
#include <iostream>
#include <cmath> // For sqrt and pow functions
using namespace std;

class point {
    int x, y;
public:
    point(int val1, int val2);
    void display();
    friend double distance(point p1, point p2); // Friend function to calculate distance
};

point::point(int val1, int val2) {
    x = val1;
    y = val2;
}

void point::display() {
    cout << "(" << x << " , " << y << ")" << endl;
}

// Function to calculate distance between two points
double distance(point p1, point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    point p1(2, -2);
    point p2(-1, -6);

    p1.display();
    p2.display();

    double dist = distance(p1, p2); // Calculate distance
    cout << "Distance between points: " << dist << endl;

    return 0;
}
