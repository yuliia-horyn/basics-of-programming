/*#include <iostream>
using namespace std;
struct circle
{
    double r;
    circle(double a)
    {
        this->r = a;
    }
    double area()
    {
        if (r == 0)
            throw "not a circle";
        double s = 3.14 * pow(r, 2);
        return s;
    }
};
int main() {
    circle z(2);
    cout << z.area() << endl;
    circle z1(0);
    try {
        cout << z1.area() << endl;
    }
    catch (const char* ex) {
        cerr << ex << endl;
    }
    
	return 0;
}*/