#include <iostream>
using namespace std;


class Shape {
protected:
    double a, b;
public:

    Shape(double dim1 = 14, double dim2 = 8) : a(dim1), b(dim2) {}
    virtual double area() = 0;
    virtual ~Shape() {}
};


class Triangle : public Shape {
public:
    Triangle() : Shape() {}
    double area() override {
        return (0.5 * a * b);
    }
};


class Rectangle : public Shape {
public:
    Rectangle() : Shape() {}

    double area() override {
        return (a * b);
    }
};

int main() {
    Triangle tri;
    cout << "Area of Triangle: " << tri.area() << endl;

    Rectangle rect;
    cout << "Area of Rectangle: " << rect.area() << endl;

    return 0;
}
