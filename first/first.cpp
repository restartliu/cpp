#include<iostream>

using namespace std;

#define PI 3.1415

class Circle
{
    public:
        double girth;
        double area;
        double radius;

    public:
        void setR(double r)
        {
            cout << "Input c1 circle's radius:";
            cin >> r;
            radius = r;
        }

        void setGirth(double girth)
        {
            girth = PI*2*radius;
            cout << "This circle's girth is " << girth << endl;
        }

        void setArea(double area)
        {
            area = PI*radius*radius;
            cout << "This circle's area is " << area << endl;
        }
};

int main()
{
    Circle c1;

    c1.setR(c1.radius);
    c1.setGirth(c1.girth);
    c1.setArea(c1.area);

    return 0;
}
