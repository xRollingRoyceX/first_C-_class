
#include <std_lib_facilities.h>
//omit file_name<<.>h> of this file if using not using raspberry PI or using nano
//(omitting .h in nano makes things harder to read)
class get_area
{
public:
        double a = 0.0;
        double l, w, h;

        get_area(double l, double w, double h):
                //I gotta figure this out...
                 a (l *  w * h ),//area
                 l (a / (w * h)),//length
                 w (a / (l * h)),//width
                 h (a / (l * w)) /*height*/ {}
                //I figured this out....
};
