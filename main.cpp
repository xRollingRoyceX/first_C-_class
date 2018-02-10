#include "data_class"


int main()
{
	get_the c1(47.62352,0,72);
	cout << c1.b << endl;
}
#include <std_lib_facilities.h>

class force_class{
public:
        double f, m, a;
        force_class(double force, double mass, double accel) :
                f(mass * accel),
                m(force * accel),
                a(mass * force) {}
};
class get_area
{
public:
        double a = 0.0;
        double l, w, h;
        get_area(double l, double w, double h) :
                //I gotta figure this out...
                 a (l *  w * h ),//area
                 l (a / (w * h)),//length
                 w (a / (l * h)),//width
                 h (a / (l * w)) /*height*/ {}
                //I figured this out....
};

